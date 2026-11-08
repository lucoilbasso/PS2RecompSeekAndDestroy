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

// Function: ApMCardDataSave__FP8ApcMCardi
// Address: 0x11be70 - 0x11c0b8
void ApMCardDataSave__FP8ApcMCardi_0x11be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMCardDataSave__FP8ApcMCardi_0x11be70");
#endif

    switch (ctx->pc) {
        case 0x11bee8u: goto label_11bee8;
        case 0x11bf08u: goto label_11bf08;
        case 0x11bf14u: goto label_11bf14;
        case 0x11bf88u: goto label_11bf88;
        case 0x11bfd8u: goto label_11bfd8;
        case 0x11bfe4u: goto label_11bfe4;
        case 0x11bff4u: goto label_11bff4;
        case 0x11c004u: goto label_11c004;
        case 0x11c028u: goto label_11c028;
        case 0x11c084u: goto label_11c084;
        default: break;
    }

    ctx->pc = 0x11be70u;

    // 0x11be70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11be74: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x11be74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11be78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11be78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11be7c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11be80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11be80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11be84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11be88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11be88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11be90: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x11be90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x11be94: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11be98: 0x2475c540  addiu       $s5, $v1, -0x3AC0
    ctx->pc = 0x11be98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x11be9c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x11be9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x11bea0: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x11bea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x11bea4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11bea8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11bea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11beac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x11beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x11beb0: 0x108300  sll         $s0, $s0, 12
    ctx->pc = 0x11beb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x11beb4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x11beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x11beb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bebc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x11bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x11bec0: 0xb08021  addu        $s0, $a1, $s0
    ctx->pc = 0x11bec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x11bec4: 0x24b44600  addiu       $s4, $a1, 0x4600
    ctx->pc = 0x11bec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 17920));
    // 0x11bec8: 0x26b10c08  addiu       $s1, $s5, 0xC08
    ctx->pc = 0x11bec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 3080));
    // 0x11becc: 0x8cc23624  lw          $v0, 0x3624($a2)
    ctx->pc = 0x11beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13860)));
    // 0x11bed0: 0x26104e00  addiu       $s0, $s0, 0x4E00
    ctx->pc = 0x11bed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19968));
    // 0x11bed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bed8: 0xacc23624  sw          $v0, 0x3624($a2)
    ctx->pc = 0x11bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 13860), GPR_U32(ctx, 2));
    // 0x11bedc: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11bee0: 0xc04523e  jal         func_1148F8
    ctx->pc = 0x11BEE0u;
    SET_GPR_U32(ctx, 31, 0x11BEE8u);
    ctx->pc = 0x11BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEE0u;
    // 0x11bee4: 0x2457c180  addiu       $s7, $v0, -0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0x11BEE0u, 0x11BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEE8u;
label_11bee8:
    // 0x11bee8: 0x26a31cb0  addiu       $v1, $s5, 0x1CB0
    ctx->pc = 0x11bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 7344));
    // 0x11beec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bef0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bef4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x11bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x11bef8: 0x240524d0  addiu       $a1, $zero, 0x24D0
    ctx->pc = 0x11bef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11befc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11befcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bf00: 0xc045352  jal         func_114D48
    ctx->pc = 0x11BF00u;
    SET_GPR_U32(ctx, 31, 0x11BF08u);
    ctx->pc = 0x11BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF00u;
    // 0x11bf04: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D48u, 0x11BF00u, 0x11BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF08u;
label_11bf08:
    // 0x11bf08: 0x26a324c0  addiu       $v1, $s5, 0x24C0
    ctx->pc = 0x11bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 9408));
    // 0x11bf0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11bf10: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x11bf10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11bf14:
    // 0x11bf14: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x11bf14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bf18: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x11bf18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11bf1c: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x11bf1cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11bf20: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x11bf20u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11bf24: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x11bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x11bf28: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x11bf28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x11bf2c: 0xfe060010  sd          $a2, 0x10($s0)
    ctx->pc = 0x11bf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 6));
    // 0x11bf30: 0xfe070018  sd          $a3, 0x18($s0)
    ctx->pc = 0x11bf30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 7));
    // 0x11bf34: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x11bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x11bf38: 0x0  nop
    ctx->pc = 0x11bf38u;
    // NOP
    // 0x11bf3c: 0x0  nop
    ctx->pc = 0x11bf3cu;
    // NOP
    // 0x11bf40: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11BF40u;
    {
        const bool branch_taken_0x11bf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF40u;
        // 0x11bf44: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf40) {
            ctx->pc = 0x11BF14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bf14;
        }
    }
    ctx->pc = 0x11BF48u;
    // 0x11bf48: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x11bf48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bf4c: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x11bf4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11bf50: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x11bf50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x11bf54: 0x26e70014  addiu       $a3, $s7, 0x14
    ctx->pc = 0x11bf54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x11bf58: 0x2408006d  addiu       $t0, $zero, 0x6D
    ctx->pc = 0x11bf58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x11bf5c: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x11bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x11bf60: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x11bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11bf64: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x11bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11bf68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bf6c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x11bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x11bf70: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x11bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x11bf74: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x11bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x11bf78: 0x26a60e30  addiu       $a2, $s5, 0xE30
    ctx->pc = 0x11bf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 3632));
    // 0x11bf7c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x11bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x11bf80: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x11bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
    // 0x11bf84: 0x0  nop
    ctx->pc = 0x11bf84u;
    // NOP
label_11bf88:
    // 0x11bf88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11bf8c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x11bf8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x11bf90: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x11bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11bf94: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x11bf94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x11bf98: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x11bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11bf9c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x11bf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11bfa0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11bfa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11bfa4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11bfa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11bfa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11bfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11bfac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11bfb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11bfb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11bfb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x11bfb8: 0x501fff3  bgez        $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11BFB8u;
    {
        const bool branch_taken_0x11bfb8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x11BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFB8u;
        // 0x11bfbc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfb8) {
            ctx->pc = 0x11BF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bf88;
        }
    }
    ctx->pc = 0x11BFC0u;
    // 0x11bfc0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11bfc4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x11bfc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bfc8: 0x2456c0a8  addiu       $s6, $v0, -0x3F58
    ctx->pc = 0x11bfc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951080));
    // 0x11bfcc: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x11bfccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfd0: 0x3270ffff  andi        $s0, $s3, 0xFFFF
    ctx->pc = 0x11bfd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x11bfd4: 0x0  nop
    ctx->pc = 0x11bfd4u;
    // NOP
label_11bfd8:
    // 0x11bfd8: 0x268401d0  addiu       $a0, $s4, 0x1D0
    ctx->pc = 0x11bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
    // 0x11bfdc: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x11BFDCu;
    SET_GPR_U32(ctx, 31, 0x11BFE4u);
    ctx->pc = 0x11BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFDCu;
    // 0x11bfe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x11BFDCu, 0x11BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFE4u;
label_11bfe4:
    // 0x11bfe4: 0x26e401d0  addiu       $a0, $s7, 0x1D0
    ctx->pc = 0x11bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 464));
    // 0x11bfe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfec: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x11BFECu;
    SET_GPR_U32(ctx, 31, 0x11BFF4u);
    ctx->pc = 0x11BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFECu;
    // 0x11bff0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x11BFECu, 0x11BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFF4u;
label_11bff4:
    // 0x11bff4: 0x26a40c50  addiu       $a0, $s5, 0xC50
    ctx->pc = 0x11bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3152));
    // 0x11bff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bffc: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x11BFFCu;
    SET_GPR_U32(ctx, 31, 0x11C004u);
    ctx->pc = 0x11C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFFCu;
    // 0x11c000: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x11BFFCu, 0x11C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C004u;
label_11c004:
    // 0x11c004: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x11c004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x11c008: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11c008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c00c: 0x961021  addu        $v0, $a0, $s6
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x11c010: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c014: 0x58600013  blezl       $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x11C014u;
    {
        const bool branch_taken_0x11c014 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11c014) {
            ctx->pc = 0x11C018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C014u;
            // 0x11c018: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C064u;
            goto label_11c064;
        }
    }
    ctx->pc = 0x11C01Cu;
    // 0x11c01c: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x11c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x11c020: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x11c020u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c024: 0x0  nop
    ctx->pc = 0x11c024u;
    // NOP
label_11c028:
    // 0x11c028: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11c02c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11c030: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11c030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11c034: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x11c034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x11c038: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x11c038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11c03c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x11c03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11c040: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11c040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11c044: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11c044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11c048: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11c048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11c04c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11c04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11c050: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11c050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11c054: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c058: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x11C058u;
    {
        const bool branch_taken_0x11c058 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C058u;
        // 0x11c05c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c058) {
            ctx->pc = 0x11C028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c028;
        }
    }
    ctx->pc = 0x11C060u;
    // 0x11c060: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11c060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_11c064:
    // 0x11c064: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x11c064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x11c068: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x11C068u;
    {
        const bool branch_taken_0x11c068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C068u;
        // 0x11c06c: 0x3270ffff  andi        $s0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c068) {
            ctx->pc = 0x11BFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bfd8;
        }
    }
    ctx->pc = 0x11C070u;
    // 0x11c070: 0x269003b0  addiu       $s0, $s4, 0x3B0
    ctx->pc = 0x11c070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 944));
    // 0x11c074: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11c074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c078: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11c078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x11c07c: 0xc045352  jal         func_114D48
    ctx->pc = 0x11C07Cu;
    SET_GPR_U32(ctx, 31, 0x11C084u);
    ctx->pc = 0x11C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C07Cu;
    // 0x11c080: 0x240503c0  addiu       $a1, $zero, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D48u, 0x11C07Cu, 0x11C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C084u;
label_11c084:
    // 0x11c084: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11c084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11c088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11c090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c094: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11c094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c098: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11c098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c09c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11c09cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11c0a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x11c0a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c0a4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x11c0a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11c0a8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x11c0a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c0ac: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x11c0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11c0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0B0u;
        // 0x11c0b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C0B8u;
}
