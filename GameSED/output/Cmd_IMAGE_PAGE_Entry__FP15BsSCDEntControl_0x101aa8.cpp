#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Cmd_IMAGE_PAGE_Entry__FP15BsSCDEntControl
// Address: 0x101aa8 - 0x101de0
void Cmd_IMAGE_PAGE_Entry__FP15BsSCDEntControl_0x101aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_IMAGE_PAGE_Entry__FP15BsSCDEntControl_0x101aa8");
#endif

    switch (ctx->pc) {
        case 0x101b18u: goto label_101b18;
        case 0x101b3cu: goto label_101b3c;
        case 0x101b80u: goto label_101b80;
        case 0x101b8cu: goto label_101b8c;
        case 0x101bacu: goto label_101bac;
        case 0x101bb4u: goto label_101bb4;
        case 0x101becu: goto label_101bec;
        case 0x101c24u: goto label_101c24;
        case 0x101c34u: goto label_101c34;
        case 0x101cd8u: goto label_101cd8;
        case 0x101ce0u: goto label_101ce0;
        case 0x101d18u: goto label_101d18;
        case 0x101d50u: goto label_101d50;
        case 0x101d60u: goto label_101d60;
        case 0x101dbcu: goto label_101dbc;
        default: break;
    }

    ctx->pc = 0x101aa8u;

    // 0x101aa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x101aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x101aac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x101aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x101ab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x101ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x101ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x101abc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x101abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x101ac0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x101ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x101ac4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x101ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x101ac8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x101ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x101acc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x101accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x101ad0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x101ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x101ad4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x101ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x101ad8: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x101AD8u;
    {
        const bool branch_taken_0x101ad8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x101ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AD8u;
        // 0x101adc: 0x8c740044  lw          $s4, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ad8) {
            ctx->pc = 0x101B10u;
            goto label_101b10;
        }
    }
    ctx->pc = 0x101AE0u;
    // 0x101ae0: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x101ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x101ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101aec: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x101aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x101af0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101af4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x101af8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101af8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101afc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101afcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101b00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101b04: 0x804060c  j           func_101830
    ctx->pc = 0x101B04u;
    ctx->pc = 0x101B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B04u;
    // 0x101b08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101830u;
    Ap2DPanelLoadImageInfo__FP15BsSCDEntControlP10WImageInfo_0x101830(rdram, ctx, runtime); return;
    ctx->pc = 0x101B0Cu;
    // 0x101b0c: 0x0  nop
    ctx->pc = 0x101b0cu;
    // NOP
label_101b10:
    // 0x101b10: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101B10u;
    SET_GPR_U32(ctx, 31, 0x101B18u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101B10u, 0x101B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B18u;
label_101b18:
    // 0x101b18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x101b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x101b1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x101b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b20: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x101b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x101b24: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x101B24u;
    {
        const bool branch_taken_0x101b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B24u;
        // 0x101b28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b24) {
            ctx->pc = 0x101B78u;
            goto label_101b78;
        }
    }
    ctx->pc = 0x101B2Cu;
    // 0x101b2c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101B2Cu;
    {
        const bool branch_taken_0x101b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x101B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B2Cu;
        // 0x101b30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b2c) {
            ctx->pc = 0x101B40u;
            goto label_101b40;
        }
    }
    ctx->pc = 0x101B34u;
    // 0x101b34: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101B34u;
    SET_GPR_U32(ctx, 31, 0x101B3Cu);
    ctx->pc = 0x101B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B34u;
    // 0x101b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101B34u, 0x101B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B3Cu;
label_101b3c:
    // 0x101b3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x101b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101b40:
    // 0x101b40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101b44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101b48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x101b50: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x101b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x101b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101b5c: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x101b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x101b60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101b64: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101b64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101b68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101b6c: 0x8040438  j           func_1010E0
    ctx->pc = 0x101B6Cu;
    ctx->pc = 0x101B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B6Cu;
    // 0x101b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010E0u;
    ImagePageInfoLoad__9ApcObjRscP10WImageInfoii_0x1010e0(rdram, ctx, runtime); return;
    ctx->pc = 0x101B74u;
    // 0x101b74: 0x0  nop
    ctx->pc = 0x101b74u;
    // NOP
label_101b78:
    // 0x101b78: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101B78u;
    SET_GPR_U32(ctx, 31, 0x101B80u);
    ctx->pc = 0x101B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B78u;
    // 0x101b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101B78u, 0x101B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B80u;
label_101b80:
    // 0x101b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101B84u;
    SET_GPR_U32(ctx, 31, 0x101B8Cu);
    ctx->pc = 0x101B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B84u;
    // 0x101b88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101B84u, 0x101B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B8Cu;
label_101b8c:
    // 0x101b8c: 0x16200048  bnez        $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x101B8Cu;
    {
        const bool branch_taken_0x101b8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x101B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B8Cu;
        // 0x101b90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b8c) {
            ctx->pc = 0x101CB0u;
            goto label_101cb0;
        }
    }
    ctx->pc = 0x101B94u;
    // 0x101b94: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x101b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x101b98: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x101b98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b9c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x101b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ba0: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x101ba4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101BA4u;
    SET_GPR_U32(ctx, 31, 0x101BACu);
    ctx->pc = 0x101BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BA4u;
    // 0x101ba8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101BA4u, 0x101BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BACu;
label_101bac:
    // 0x101bac: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101BACu;
    SET_GPR_U32(ctx, 31, 0x101BB4u);
    ctx->pc = 0x101BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BACu;
    // 0x101bb0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101BACu, 0x101BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BB4u;
label_101bb4:
    // 0x101bb4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x101bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x101bb8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x101bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x101bbc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x101bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x101bc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101bc4: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x101bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x101bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101bcc: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x101BCCu;
    {
        const bool branch_taken_0x101bcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x101BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BCCu;
        // 0x101bd0: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bcc) {
            ctx->pc = 0x101BECu;
            goto label_101bec;
        }
    }
    ctx->pc = 0x101BD4u;
    // 0x101bd4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x101bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x101bd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bdc: 0x24a519c8  addiu       $a1, $a1, 0x19C8
    ctx->pc = 0x101bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    // 0x101be0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x101be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x101be4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101BE4u;
    SET_GPR_U32(ctx, 31, 0x101BECu);
    ctx->pc = 0x101BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BE4u;
    // 0x101be8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101BE4u, 0x101BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BECu;
label_101bec:
    // 0x101bec: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x101BECu;
    {
        const bool branch_taken_0x101bec = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x101BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BECu;
        // 0x101bf0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bec) {
            ctx->pc = 0x101C04u;
            goto label_101c04;
        }
    }
    ctx->pc = 0x101BF4u;
    // 0x101bf4: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x101bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x101bf8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x101bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101bfc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101BFCu;
    {
        const bool branch_taken_0x101bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101bfc) {
            ctx->pc = 0x101C08u;
            goto label_101c08;
        }
    }
    ctx->pc = 0x101C04u;
label_101c04:
    // 0x101c04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101c08:
    // 0x101c08: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x101C08u;
    {
        const bool branch_taken_0x101c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C08u;
        // 0x101c0c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c08) {
            ctx->pc = 0x101C24u;
            goto label_101c24;
        }
    }
    ctx->pc = 0x101C10u;
    // 0x101c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c14: 0x24a519c8  addiu       $a1, $a1, 0x19C8
    ctx->pc = 0x101c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    // 0x101c18: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x101c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x101c1c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101C1Cu;
    SET_GPR_U32(ctx, 31, 0x101C24u);
    ctx->pc = 0x101C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C1Cu;
    // 0x101c20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101C1Cu, 0x101C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C24u;
label_101c24:
    // 0x101c24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x101c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c2c: 0xc04039c  jal         func_100E70
    ctx->pc = 0x101C2Cu;
    SET_GPR_U32(ctx, 31, 0x101C34u);
    ctx->pc = 0x101C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C2Cu;
    // 0x101c30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100E70u, 0x101C2Cu, 0x101C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C34u;
label_101c34:
    // 0x101c34: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x101c34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101c38: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x101c38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x101c3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101c44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x101c48: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x101c48u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x101c4c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x101c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x101c50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101c54: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x101c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x101c58: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x101c58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x101c5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x101c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101c64: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x101c64u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x101c68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101c68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101c6c: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x101c6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x101c70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101c70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101c74: 0xfd030010  sd          $v1, 0x10($t0)
    ctx->pc = 0x101c74u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 3));
    // 0x101c78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101c7c: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x101c7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x101c80: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x101c80u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x101c84: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x101c84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101c88: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x101c88u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x101c8c: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x101c8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x101c90: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x101c90u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x101c94: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x101c94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x101c98: 0xfd030030  sd          $v1, 0x30($t0)
    ctx->pc = 0x101c98u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 3));
    // 0x101c9c: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x101c9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x101ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101ca4: 0xfd020038  sd          $v0, 0x38($t0)
    ctx->pc = 0x101ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 2));
    // 0x101ca8: 0x8040438  j           func_1010E0
    ctx->pc = 0x101CA8u;
    ctx->pc = 0x101CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CA8u;
    // 0x101cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010E0u;
    ImagePageInfoLoad__9ApcObjRscP10WImageInfoii_0x1010e0(rdram, ctx, runtime); return;
    ctx->pc = 0x101CB0u;
label_101cb0:
    // 0x101cb0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x101cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x101cb4: 0x56220042  bnel        $s1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x101CB4u;
    {
        const bool branch_taken_0x101cb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x101cb4) {
            ctx->pc = 0x101CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101CB4u;
            // 0x101cb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101DC0u;
            goto label_101dc0;
        }
    }
    ctx->pc = 0x101CBCu;
    // 0x101cbc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x101cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x101cc0: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x101cc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cc4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x101cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cc8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x101cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x101ccc: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x101cccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x101cd0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101CD0u;
    SET_GPR_U32(ctx, 31, 0x101CD8u);
    ctx->pc = 0x101CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CD0u;
    // 0x101cd4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101CD0u, 0x101CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CD8u;
label_101cd8:
    // 0x101cd8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101CD8u;
    SET_GPR_U32(ctx, 31, 0x101CE0u);
    ctx->pc = 0x101CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CD8u;
    // 0x101cdc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101CD8u, 0x101CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CE0u;
label_101ce0:
    // 0x101ce0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x101ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x101ce4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x101ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x101ce8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x101ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x101cec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101cf0: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x101cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x101cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101cf8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x101CF8u;
    {
        const bool branch_taken_0x101cf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x101CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CF8u;
        // 0x101cfc: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101cf8) {
            ctx->pc = 0x101D18u;
            goto label_101d18;
        }
    }
    ctx->pc = 0x101D00u;
    // 0x101d00: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x101d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x101d04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d08: 0x24a519c8  addiu       $a1, $a1, 0x19C8
    ctx->pc = 0x101d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    // 0x101d0c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x101d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x101d10: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101D10u;
    SET_GPR_U32(ctx, 31, 0x101D18u);
    ctx->pc = 0x101D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D10u;
    // 0x101d14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101D10u, 0x101D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D18u;
label_101d18:
    // 0x101d18: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x101D18u;
    {
        const bool branch_taken_0x101d18 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x101D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D18u;
        // 0x101d1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d18) {
            ctx->pc = 0x101D30u;
            goto label_101d30;
        }
    }
    ctx->pc = 0x101D20u;
    // 0x101d20: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x101d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x101d24: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x101d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101d28: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101D28u;
    {
        const bool branch_taken_0x101d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101d28) {
            ctx->pc = 0x101D34u;
            goto label_101d34;
        }
    }
    ctx->pc = 0x101D30u;
label_101d30:
    // 0x101d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101d34:
    // 0x101d34: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x101D34u;
    {
        const bool branch_taken_0x101d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D34u;
        // 0x101d38: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d34) {
            ctx->pc = 0x101D50u;
            goto label_101d50;
        }
    }
    ctx->pc = 0x101D3Cu;
    // 0x101d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d40: 0x24a519c8  addiu       $a1, $a1, 0x19C8
    ctx->pc = 0x101d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    // 0x101d44: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x101d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x101d48: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101D48u;
    SET_GPR_U32(ctx, 31, 0x101D50u);
    ctx->pc = 0x101D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D48u;
    // 0x101d4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101D48u, 0x101D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D50u;
label_101d50:
    // 0x101d50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x101d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d58: 0xc04039c  jal         func_100E70
    ctx->pc = 0x101D58u;
    SET_GPR_U32(ctx, 31, 0x101D60u);
    ctx->pc = 0x101D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D58u;
    // 0x101d5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100E70u, 0x101D58u, 0x101D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D60u;
label_101d60:
    // 0x101d60: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x101d60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101d64: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x101d64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x101d68: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x101d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x101d6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d70: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x101d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x101d74: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x101d74u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x101d78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x101d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d80: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x101d80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x101d84: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x101d84u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x101d88: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x101d88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x101d8c: 0xfd030010  sd          $v1, 0x10($t0)
    ctx->pc = 0x101d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 3));
    // 0x101d90: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x101d90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x101d94: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x101d94u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x101d98: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x101d98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101d9c: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x101d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x101da0: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x101da0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x101da4: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x101da4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x101da8: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x101da8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x101dac: 0xfd030030  sd          $v1, 0x30($t0)
    ctx->pc = 0x101dacu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 3));
    // 0x101db0: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x101db0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x101db4: 0xc040438  jal         func_1010E0
    ctx->pc = 0x101DB4u;
    SET_GPR_U32(ctx, 31, 0x101DBCu);
    ctx->pc = 0x101DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101DB4u;
    // 0x101db8: 0xfd020038  sd          $v0, 0x38($t0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010E0u, 0x101DB4u, 0x101DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DBCu;
label_101dbc:
    // 0x101dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101dc0:
    // 0x101dc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101dc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101dc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101dc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x101dcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101dccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101dd0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101dd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101dd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x101DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DD8u;
        // 0x101ddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101DE0u;
}
