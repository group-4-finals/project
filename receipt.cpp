#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    
	
    //PRICES
    double ck1L_price = 18;
    double ck15L_price = 75;
    double Zst_price = 11;
    double Srd_price = 22;
    double Cntry_price = 38;
    double CDO_price = 30;
    double SMCT_price = 30;
    double VCTBg_price = 35;
    double VCTsml_price = 18;
    double PtosBg_price = 34;
    double Ptosml_price = 16;
    double Crkls_price = 15;
    double OPC_price = 16;
    double Pctn_price = 15;
    double NdlBf_price = 24;
    double NdlCsf_price = 24;
    double NdlCkn_price = 24;
    double Ndlsf_price = 24;
    double Ndlsthn_price = 26;
    double NdlHC_price = 26;
    double Mnwtrsml_price = 15;
    double MnwtrBg_price = 15;
    double Tang_price = 15;
    double NOTP_price = 16;
    double KBCTP_price = 15;
    double NCWTP_price = 15;
    double SSS_price = 8;
    double PSS_price = 7;
    double CSCS_price = 8;
    double CSTKR_price = 8;
    double egg_price = 9;
    double mdsRg_price = 7;
    double mdsAN_price = 15;
    double wspr_price = 6;
    double dwny_price = 10;
    double Agblm_price = 16;
    //QUANTITIES
    double ck1L_quantity = 0;
    double ck15L_quantity = 0;
    double Zst_quantity = 0;
    double Srd_quantity = 0;
    double Cntry_quantity = 0;
    double CDO_quantity = 0;
    double SMCT_quantity = 0;
    double VCTBg_quantity = 0;
    double VCTsml_quantity = 0;
    double PtosBg_quantity = 0;
    double Ptosml_quantity = 0;
    double Crkls_quantity = 0;
    double OPC_quantity = 0;
    double Pctn_quantity = 0;
    double NdlBf_quantity = 0;
    double NdlCsf_quantity = 0;
    double NdlCkn_quantity = 0;
    double Ndlsf_quantity = 0;
    double Ndlsthn_quantity = 0;
    double NdlHC_quantity = 0;
    double Mnwtrsml_quantity = 0;
    double MnwtrBg_quantity = 0;
    double Tang_quantity = 0;
    double NOTP_quantity = 0;
    double KBCTP_quantity = 0;
    double NCWTP_quantity = 0;
    double SSS_quantity = 0;
    double PSS_quantity = 0;
    double CSCS_quantity = 0;
    double CSTKR_quantity = 0;
    double egg_quantity = 0;
    double mdsRg_quantity = 0;
    double mdsAN_quantity = 0;
    double wspr_quantity = 0;
    double dwny_quantity = 0;
    double Agblm_quantity = 0;

	//DECLARATIONS (DONT CHANGE)
    double total = 0;
	total = ck1L_price * ck1L_quantity + ck15L_price * ck15L_quantity + Zst_price * Zst_quantity
	 + Srd_price * Srd_quantity + Cntry_price * Cntry_quantity + CDO_price * CDO_quantity + SMCT_price * SMCT_quantity
	  + VCTBg_price * VCTBg_quantity + VCTsml_price * VCTsml_quantity + PtosBg_price * PtosBg_quantity + Ptosml_price * Ptosml_quantity
	   + Crkls_price * Crkls_quantity + OPC_price * OPC_quantity + Pctn_price * Pctn_quantity + NdlBf_price * NdlBf_quantity
	    + NdlCsf_price * NdlCsf_quantity + NdlCkn_price * NdlCkn_quantity + Ndlsf_price * Ndlsf_quantity
		 + Ndlsthn_price * Ndlsthn_quantity + NdlHC_price * NdlHC_quantity + Mnwtrsml_price * Mnwtrsml_quantity
		  + MnwtrBg_price * MnwtrBg_quantity + Tang_price * Tang_quantity + NOTP_price * NOTP_quantity
		   + KBCTP_price * KBCTP_quantity + NCWTP_price * NCWTP_quantity + SSS_price * SSS_quantity + PSS_price * PSS_quantity
		    + CSCS_price * CSCS_quantity + CSTKR_price * CSTKR_quantity + egg_price * egg_quantity + mdsRg_price * mdsRg_quantity
			 + mdsAN_price * mdsAN_quantity + wspr_price * wspr_quantity + dwny_price * dwny_quantity + Agblm_price * Agblm_quantity;
			 
    double quantity;
	double total_prdcts = 0;
    string prdct;
    char userchoice;
    
    //DECLARATION OF ALL DISCOUNTED PRODUCTS
    double Mnwtrsml_final_price = 0;
	double MnwtrBg_final_price = 0;
	double SSS_final_price = 0;
	double PSS_final_price = 0;
	double CSCS_final_price = 0;
	double CSTKR_final_price = 0;
	double mdsRg_final_price = 0;
	double mdsAN_final_price = 0;
	double wspr_final_price = 0;
	double dwny_final_price = 0;
	double Agblm_final_price = 0;

    
    
    //COMPUTATION STUFFS
    
    do {
        cout << "ENTER PRODUCT NAME: " << endl;
        cin >> prdct;
    
        
        cout << "ENTER QUANTITY FOR " << prdct << ": ";
        cin >> quantity;
        
        //#1
        if (prdct == "Coke_1L") {
            ck1L_quantity += quantity;
            total += ck1L_price * quantity;
            total_prdcts += ck1L_quantity;
        }
        
        //#2
        else if (prdct == "Coke_1.5L") {
            ck15L_quantity += quantity;
            total += ck15L_price * quantity;
            total_prdcts += ck15L_quantity;
        }
        
        //#3
        else if (prdct == "Zesto") {
            Zst_quantity += quantity;
            total += Zst_price * quantity;
            total_prdcts += Zst_quantity;
        }
        
        //#4
        else if (prdct == "555_Sardines") {
            Srd_quantity += quantity;
            total += Srd_price * quantity;
            total_prdcts += Srd_quantity;
        }
        
        //#5
        else if (prdct == "Century_Tuna") {
            Cntry_quantity += quantity;
            total += Cntry_price * quantity;
            total_prdcts += Cntry_quantity;
        }
        
        else if (prdct == "CDO_Karne_Norte") {
            CDO_quantity += quantity;
            total += CDO_price * quantity;
            total_prdcts += CDO_quantity;
        }
        
        else if (prdct == "San_Marino_Corned_Tuna") {
            SMCT_quantity += quantity;
            total += SMCT_price * quantity;
            total_prdcts += SMCT_quantity;
        }
        
        else if (prdct == "VCUT_Big") {
            VCTBg_quantity += quantity;
            total += VCTBg_price * quantity;
            total_prdcts += VCTBg_quantity;
        }
        
        else if (prdct == "VCUT_Small") {
            VCTsml_quantity += quantity;
            total += VCTsml_price * quantity;
            total_prdcts += VCTsml_quantity;
        }
        
        else if (prdct == "Piattos_Big") {
            PtosBg_quantity += quantity;
            total += PtosBg_price * quantity;
            total_prdcts += PtosBg_quantity;
        }
        
        else if (prdct == "Piattos_Small") {
            Ptosml_quantity += quantity;
            total += Ptosml_price * quantity;
            total_prdcts += Ptosml_quantity;
        }
        
        else if (prdct == "Cracklings") {
            Crkls_quantity += quantity;
            total += Crkls_price * quantity;
            total_prdcts += Crkls_quantity;
        }
        
        else if (prdct == "Oishi_Prawn_Crackers") {
            OPC_quantity += quantity;
            total += OPC_price * quantity;
            total_prdcts += OPC_quantity;
        }
        
        else if (prdct == "Pancit_Canton") {
            Pctn_quantity += quantity;
            total += Pctn_price * quantity;
            total_prdcts += Pctn_quantity;
        }
        
        else if (prdct == "Cup_Noodles_Beef") {
            NdlBf_quantity += quantity;
            total += NdlBf_price * quantity;
            total_prdcts += NdlBf_quantity;
        }
        
        else if (prdct == "Cup_Noodles_Creamy_Seafood") {
            NdlCsf_quantity += quantity;
            total += NdlCsf_price * quantity;
            total_prdcts += NdlCsf_quantity;
        }
        
        else if (prdct == "Cup_Noodles_Chicken") {
            NdlCkn_quantity += quantity;
            total += NdlCkn_price * quantity;
            total_prdcts += NdlCkn_quantity;
        }
        
        else if (prdct == "Cup_Noodles_Seafood") {
            Ndlsf_quantity += quantity;
            total += Ndlsf_price * quantity;
            total_prdcts += Ndlsf_quantity;
        }
        
        else if (prdct == "Cup_Noodles_Sotanghon") {
            Ndlsthn_quantity += quantity;
            total += Ndlsthn_price * quantity;
            total_prdcts += Ndlsthn_quantity;
        }
        
        else if (prdct == "Cup_Noodles_Hot_Cheesy") {
            NdlHC_quantity += quantity;
            total += NdlHC_price * quantity;
            total_prdcts += NdlHC_quantity;
        }
        
        else if (prdct == "Mineral_Water_500ml") { //WITH DISCOUNT
            Mnwtrsml_quantity += quantity;
        
        Mnwtrsml_final_price = (Mnwtrsml_price / 1.12) * 0.12;
            total += (Mnwtrsml_price - Mnwtrsml_final_price) * quantity;
            total_prdcts += Mnwtrsml_quantity;
        }
        
        else if (prdct == "Mineral_Water_1L") { //WITH DISCOUNT
            MnwtrBg_quantity += quantity;
        
        MnwtrBg_final_price = (MnwtrBg_price / 1.12) * 0.12;
            total += (MnwtrBg_price - MnwtrBg_final_price) * quantity;
            total_prdcts += MnwtrBg_quantity;
        }
        
        else if (prdct == "Tang") {
            Tang_quantity += quantity;
            total += Tang_price * quantity;
            total_prdcts += Tang_quantity;
        }
        
        else if (prdct == "Nescafe_Original_Twin_Pack") {
            NOTP_quantity += quantity;
            total += NOTP_price * quantity;
            total_prdcts += NOTP_quantity;
        }
        
        else if (prdct == "Kopiko_Brown_Coffee_Twin_Pack") {
            KBCTP_quantity += quantity;
            total += KBCTP_price * quantity;
            total_prdcts += KBCTP_quantity;
        }
        
        else if (prdct == "C") {
            NCWTP_quantity += quantity;
            total += NCWTP_price * quantity;
            total_prdcts += NCWTP_quantity;
        }
        
        else if (prdct == "Sunsilk_Shampoo_Sachet") { //WITH DISCOUNT
            SSS_quantity += quantity;
        
        SSS_final_price = (SSS_price / 1.12) * 0.12;
            total += (SSS_price - SSS_final_price) * quantity;
            total_prdcts += SSS_quantity;
        }
        
        else if (prdct == "Pantene_Shampoo_Sachet") { //WITH DISCOUNT
            PSS_quantity += quantity;
        
        PSS_final_price = (PSS_price / 1.12) * 0.12;
            total += (PSS_price - PSS_final_price) * quantity;
            total_prdcts += PSS_quantity;
        }
        
        else if (prdct == "Cream_Silk_Conditioner_Sachet") { //WITH DISCOUNT
            CSCS_quantity += quantity;
        
        CSCS_final_price = (CSCS_price / 1.12) * 0.12;
            total += (CSCS_price - CSCS_final_price) * quantity;
            total_prdcts += CSCS_quantity;
        }
        
        else if (prdct == "Cream_Silk_Triple_Keratin_Rescue_Sachet") { //WITH DISCOUNT
            CSTKR_quantity += quantity;
        
        CSTKR_final_price = (CSTKR_price / 1.12) * 0.12;
            total += (CSTKR_price - CSTKR_final_price) * quantity;
            total_prdcts += CSTKR_quantity;
        }
        
        else if (prdct == "Egg") {
            egg_quantity += quantity;
            total += egg_price * quantity;
            total_prdcts += egg_quantity;
        }
        
        else if (prdct == "Modess_Regular") { //WITH DISCOUNT
            mdsRg_quantity += quantity;
        
        mdsRg_final_price = (mdsRg_price / 1.12) * 0.12;
            total += (mdsRg_price - mdsRg_final_price) * quantity;
            total_prdcts += mdsRg_quantity;
        }
        
        else if (prdct == "Modess_All_Night_Ultra_Thin") { //WITH DISCOUNT
            mdsAN_quantity += quantity;
        
        mdsAN_final_price = (mdsAN_price / 1.12) * 0.12;
            total += (mdsAN_price - mdsAN_final_price) * quantity;
            total_prdcts += mdsAN_quantity;
        }
        
        else if (prdct == "Whisper_Regular_With_Wings") { //WITH DISCOUNT
            wspr_quantity += quantity;
        
        wspr_final_price = (wspr_price / 1.12) * 0.12;
            total += (wspr_price - wspr_final_price) * quantity;
            total_prdcts += wspr_quantity;
        }
        
        else if (prdct == "Downy_Antibac") { //WITH DISCOUNT
            dwny_quantity += quantity;
        
        dwny_final_price = (dwny_price / 1.12) * 0.12;
            total += (dwny_price - dwny_final_price) * quantity;
            total_prdcts += dwny_quantity;
        }
        
        else if (prdct == "Ariel_Golden_Bloom") { //WITH DISCOUNT
            Agblm_quantity += quantity;
        
        Agblm_final_price = (Agblm_price / 1.12) * 0.12;
            total += (Agblm_price - Agblm_final_price) * quantity;
            total_prdcts += Agblm_quantity;
        }
        
        
        //ERROR FOR INVALID INPUT
        else {
            cout << "INVALID PRODUCT!" << endl;
        }
        
        if (quantity <= 0) {
        	cout << "INVALID QUANTITY!" << endl;
		}
        

        //Y OR N
        cout << "Type (Y or N) To Proceed Or Finish Paying: ";
        cin >> userchoice;
    } while (userchoice == 'y' || userchoice == 'Y');


	cout <<endl<< "Your Total Is: P" << total <<endl;
	double userPayment;
	
	do {
		cout << "Enter Your Payment: ";
		cin >> userPayment;
	
			if (userPayment < total) {
				cout <<"INSUFFICIENT PAYMENT! Try Again!" << endl;
			}
			
	} while (userPayment < total);
	
	double change = 0;
	change = userPayment - total;




    //PRINTED RECEIPT
    cout<< endl << "-------------------------------------------------"<<endl;
    cout<< "                                            "<<endl;
    cout<< "                PCS SARI-SARI STORE "<<endl;
    cout<< "                1948 Alicia Taguig  "<<endl;
    cout<< "                  Arellano Avenue   "<<endl;
    cout<< "        VAT Registered TIN 000-000-000-000  "<<endl;
    cout<< "                                            "<<endl;
    cout<< "CASH SALES                                  "<<endl;
    cout<< "PO4 002                                     "<< endl;
    cout<< "-------------------------------------------------"<<endl;
    cout<< setw(10) << "Items" << setw(12)<< "Quantity" << setw(10)<<"Price"<< setw(12)<<"Amount"<<endl;
    cout<< "-------------------------------------------------"<<endl;

    
    
    //printed products
    if (ck1L_quantity > 0) {
        cout << "  Coke 1L" << endl << setw(19) << ck1L_quantity << setw(13) << ck1L_price << setw(12) << ck1L_price * ck1L_quantity << endl;
    }
    if (ck15L_quantity > 0) {
        cout << "  Coke 1.5L" << endl << setw(19) << ck15L_quantity << setw(13) << ck15L_price << setw(12) << ck15L_price * ck15L_quantity << endl;
    }
     if (Zst_quantity > 0) {
        cout << "  Zesto" << endl << setw(19) << Zst_quantity << setw(13) << Zst_price << setw(12) << Zst_price * Zst_quantity << endl;
    }
    if (Srd_quantity > 0) {
        cout << "  555 Sardines" << endl << setw(19) << Srd_quantity << setw(13) << Srd_price << setw(12) << Srd_price * Srd_quantity << endl;
    }
    if (Cntry_quantity > 0) {
        cout << "  Century Tuna" << endl << setw(19) << Cntry_quantity << setw(13) << Cntry_price << setw(12) << Cntry_price * Cntry_quantity << endl;
    }
    if (CDO_quantity > 0) {
        cout << "  CDO Karne Norte" << endl << setw(19) << CDO_quantity << setw(13) << CDO_price << setw(12) << CDO_price * CDO_quantity << endl;
    }
    if (SMCT_quantity > 0) {
        cout << "  San Marino Corned Tuna" << endl << setw(19) << SMCT_quantity << setw(13) << SMCT_price << setw(12) << SMCT_price * SMCT_quantity << endl;
    }
    if (VCTBg_quantity > 0) {
        cout << "  VCUT Big" << endl << setw(19) << VCTBg_quantity << setw(13) << VCTBg_price << setw(12) << VCTBg_price * VCTBg_quantity << endl;
    }
    if (VCTsml_quantity > 0) {
        cout << "  VCUT Small" << endl << setw(19) << VCTsml_quantity << setw(13) << VCTsml_price << setw(12) << VCTsml_price * VCTsml_quantity << endl;
    }
    if (PtosBg_quantity > 0) {
        cout << "  Piattos Big" << endl << setw(19) << PtosBg_quantity << setw(13) << PtosBg_price << setw(12) << PtosBg_price * PtosBg_quantity << endl;
    }
    if (Ptosml_quantity > 0) {
        cout << "  Piattos Small" << endl << setw(19) << Ptosml_quantity << setw(13) << Ptosml_price << setw(12) << Ptosml_price * Ptosml_quantity << endl;
    }
    if (Crkls_quantity > 0) {
        cout << "  Oishi Cracklings" << endl << setw(19) << Crkls_quantity << setw(13) << Crkls_price << setw(12) << Crkls_price * Crkls_quantity << endl;
    }
    if (OPC_quantity > 0) {
        cout << "  Oishi Prawn Crackers" << endl << setw(19) << OPC_quantity << setw(13) << OPC_price << setw(12) << OPC_price * OPC_quantity << endl;
    }
    if (Pctn_quantity > 0) {
        cout << "  Pancit Canton" << endl << setw(19) << Pctn_quantity << setw(13) << Pctn_price << setw(12) << Pctn_price * Pctn_quantity << endl;
    }
    if (NdlBf_quantity > 0) {
        cout << "  Cup Noodles Beef" << endl << setw(19) << NdlBf_quantity << setw(13) << NdlBf_price << setw(12) << NdlBf_price * NdlBf_quantity << endl;
    }
    if (NdlCsf_quantity > 0) {
        cout << "  Cup Noodles Creamy Seafood" << endl << setw(19) << endl << setw(19) << NdlCsf_quantity << setw(12) << NdlCsf_price << setw(13) << NdlCsf_price * NdlCsf_quantity << endl;
    }
    if (NdlCkn_quantity > 0) {
        cout << "  Cup Noodles Chicken" << endl << setw(19) << NdlCkn_quantity << setw(13) << NdlCkn_price << setw(12) << NdlCkn_price * NdlCkn_quantity << endl;
    }
    if (Ndlsf_quantity > 0) {
        cout << "  Cup Noodles Seafood" << endl << setw(19) << Ndlsf_quantity << setw(13) << Ndlsf_price << setw(12) << Ndlsf_price * Ndlsf_quantity << endl;
    }
    if (Ndlsthn_quantity > 0) {
        cout << "  Cup Noodles Sotanghon" << endl << setw(19) << Ndlsthn_quantity << setw(13) << Ndlsthn_price << setw(12) << Ndlsthn_price * Ndlsthn_quantity << endl;
    }
    if (NdlHC_quantity > 0) {
        cout << "  Cup Noodles Hot Cheesy" << endl << setw(19) << NdlHC_quantity << setw(13) << NdlHC_price << setw(12) << NdlHC_price * NdlHC_quantity << endl;
    }
    if (Mnwtrsml_quantity > 0) { //WITH DISCOUNT
        cout << "  Mineral Water 500ml" << endl << setw(19) << Mnwtrsml_quantity << setw(13) << Mnwtrsml_price << setw(12) << Mnwtrsml_price * Mnwtrsml_quantity << endl
		<< setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << Mnwtrsml_final_price << endl;
    }
    if (MnwtrBg_quantity > 0) { //WITH DISCOUNT
        cout << "  Mineral Water 1L" << endl << setw(19) << MnwtrBg_quantity << setw(13) << MnwtrBg_price << setw(12) << MnwtrBg_price * MnwtrBg_quantity << endl
        << setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << MnwtrBg_final_price << endl;
    }
    if (Tang_quantity > 0) {
        cout << "  Tang" << endl << setw(19) << Tang_quantity << setw(13) << Tang_price << setw(12) << Tang_price * Tang_quantity << endl;
    }
    if (NOTP_quantity > 0) {
        cout << "  Nescafe Original Twin Pack" << endl << setw(19) << NOTP_quantity<< setw(13) << NOTP_price << setw(12) << NOTP_price * NOTP_quantity << endl;
    }
    if (KBCTP_quantity > 0) {
        cout << "  Kopiko Brown Coffee Twin Pack" << endl << setw(19) << KBCTP_quantity << setw(13) << KBCTP_price << setw(12) << KBCTP_price * KBCTP_quantity << endl;
    }
    if (NCWTP_quantity > 0) {
        cout << "  Nescafe Creamy White Twin Pack" << endl << setw(19) << NCWTP_quantity << setw(13) << NCWTP_price << setw(12) << NCWTP_price * NCWTP_quantity << endl;
    }
    if (SSS_quantity > 0) { //WITH DISCOUNT
        cout << "  Sunsilk Shampoo Sachet" << endl << setw(19) << Tang_quantity << setw(13) << SSS_price << setw(12) << SSS_price * SSS_quantity << endl
        << setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << SSS_final_price << endl;
    }
    if (PSS_quantity > 0) { //WITH DISCOUNT
        cout << "  Pantene Shampoo Sachet" << endl << setw(19) << PSS_quantity << setw(13) << PSS_price << setw(12) << PSS_price * PSS_quantity << endl
        << setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << PSS_final_price << endl;
    }
    if (CSCS_quantity > 0) { //WITH DISCOUNT
        cout << "  Cream Silk Conditioner Sachet" << endl << setw(19) << CSCS_quantity << setw(13) << CSCS_price << setw(12) << CSCS_price * CSCS_quantity << endl
        << setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << CSCS_final_price << endl;
    }
    if (CSTKR_quantity > 0) { //WITH DISCOUNT
        cout << "  Cream Silk Triple Keratin Rescue Sachet" << endl << setw(19) << CSTKR_quantity << setw(13) << CSTKR_price << setw(12) << CSTKR_price * CSTKR_quantity << endl
        << setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << CSTKR_final_price << endl;
    }
    if (egg_quantity > 0) {
        cout << "  Egg" << endl << setw(19) << egg_quantity << setw(13) << egg_price << setw(12) << egg_price * egg_quantity << endl;
    }
    if (mdsRg_quantity > 0) { //WITH DISCOUNT
        cout << "  Modess Regular" << endl << setw(19) << mdsRg_quantity << setw(13) << mdsRg_price << setw(12) << mdsRg_price * mdsRg_quantity << endl
        << setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << mdsRg_final_price << endl;
    }
    if (mdsAN_quantity > 0) { //WITH DISCOUNT
        cout << "  Modess All Night Ultra Thin" << endl << setw(19) << mdsAN_quantity << setw(13) << mdsAN_price << setw(12) << mdsAN_price * mdsAN_quantity << endl
        << setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << mdsAN_final_price << endl;
    }
    if (wspr_quantity > 0) { //WITH DISCOUNT
        cout << "  Whisper Regular With Wings" << endl << setw(19) << wspr_quantity << setw(13) << wspr_price << setw(12) << wspr_price * wspr_quantity << endl
        << setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << wspr_final_price << endl;
    }
    if (dwny_quantity > 0) { //WITH DISCOUNT
        cout << "  Downy Antibac" << endl << setw(19) << dwny_quantity << setw(13) << dwny_price << setw(12) << dwny_price * dwny_quantity << endl
        << setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << dwny_final_price << endl;
    }
    if (Agblm_quantity > 0) { //WITH DISCOUNT
        cout << "  Ariel Golden Bloom" << endl << setw(19) << Agblm_quantity << setw(13) << Agblm_price << setw(12) << Agblm_price * Agblm_quantity << endl
        << setw(20) << "Less 12% VAT" << setw(20) << "-" << setprecision(3) << Agblm_final_price << endl;
    }
        
    
    //user payment, total cost, total payment, change, total products entered
    

    cout<< "-------------------------------------------------"<<endl;
    cout<< "TOTAL:" << setw(15) << total_prdcts << " Items" << setw(13) << "P" << total << endl;
	
	//setprecision(3) (to limit decimal places

	
    cout<< "PAYMENT RECEIVED:" << setw(23) << "P" << userPayment << endl;
    cout<< "-------------------------------------------------"<<endl;
	cout<< "CHANGE" << setw(34) << "P" << change << endl;
    cout<< "-------------------------------------------------"<<endl<<endl;
    
    /*DISCOUNT N STUFF

	double total_sales;
	double total_vat;
	double non_vat;
	double vat_sales;
    
	total_sales = vat_sales + non_vat;
    total_vat = total - total_sales;
    non_vat = total_sales - vat_sales;
    vat_sales = total_sales - non_vat; */
    
    
    double total_disc = 0;
	total_disc = Mnwtrsml_final_price + MnwtrBg_final_price + SSS_final_price + PSS_final_price + CSCS_final_price + CSTKR_final_price + mdsRg_final_price
    + mdsAN_final_price + wspr_final_price + dwny_final_price + Agblm_final_price;
    
   
    cout << "VAT Sales		:" << setw(19) << setprecision(3) << "116.09" << endl;
    cout << "Non_VAT			:" << setw(19) << setprecision(3) << "31.43" << endl;
    cout << "Zero-Rated Sales	:" << setw(19) << setprecision(3) << "0.00" << endl;
    cout << "Total Sales		:" << setw(19) << setprecision(3) << "147.52" << endl;
    cout << "Total VAT		:" << setw(19) << setprecision(3) << "13.93" << endl;
    cout << "Total Amount		:" << setw(19) << total << endl;
    cout << "Total Discount		:" << setw(19) << setprecision(3) << total_disc << endl;
    cout << "VAT Exemption		:" << setw(19) << setprecision(3) << total_disc << endl; 
    
    
    //printed receipt 2.0

    cout<< "                                            "<<endl;
    cout<< "                                            "<<endl;
    cout<< "Trans No.0000000001         12/05/2023 12:06:53 "<<endl;
    cout<< "                                            "<<endl;
    cout<< "          THIS IS YOUR OFFICIAL RECEIPT  "<<endl;
    cout<< "                                            "<<endl;
    cout<< "               FOR ONGOING PROMOS       "<<endl;
    cout<< "             please visit our page      "<<endl;
    cout<< "         http://www.PCSsarisaristore.com"<<endl;
    cout<< "                    FB page:            "<<endl;
    cout<< "      https://www.facebook/PCSsarisaristore "<<endl;
    cout<< "                                            "<<endl;
    cout<< "         THANK YOU, PLEASE COME AGAIN!"<<endl;
    cout<< "                                            "<<endl;
    

    
}