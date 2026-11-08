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

// Function: entry_00170aa0
// Address: 0x170aa0 - 0x170b3c
void entry_00170aa0_0x170aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170aa0_0x170aa0");
#endif

    switch (ctx->pc) {
        case 0x170b04u: goto label_170b04;
        case 0x170b2cu: goto label_170b2c;
        default: break;
    }

    ctx->pc = 0x170aa0u;

    // 0x170aa0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x170aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x170aa4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x170aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170aa8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x170aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x170aac: 0x26731308  addiu       $s3, $s3, 0x1308
    ctx->pc = 0x170aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4872));
    // 0x170ab0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x170ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x170ab4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x170ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x170ab8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x170ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x170abc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x170abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ac0: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x170ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x170ac4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x170ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ac8: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x170ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x170acc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x170accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x170ad0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x170ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x170ad4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x170ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x170ad8: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x170ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x170adc: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x170adcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x170ae0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x170ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x170ae4: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x170ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x170ae8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x170ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x170aec: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x170aecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x170af0: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x170af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x170af4: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x170af4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x170af8: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x170af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x170afc: 0xc05c41c  jal         func_171070
    ctx->pc = 0x170AFCu;
    SET_GPR_U32(ctx, 31, 0x170B04u);
    ctx->pc = 0x170B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170AFCu;
    // 0x170b00: 0x242880b  movn        $s1, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171070u, 0x170AFCu, 0x170B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B04u;
label_170b04:
    // 0x170b04: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x170b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170b08: 0x2519023  subu        $s2, $s2, $s1
    ctx->pc = 0x170b08u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x170b0c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x170b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170b10: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x170b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b14: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x170b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170b18: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x170b18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b1c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x170b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x170b20: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x170b20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b24: 0xc05c2d8  jal         func_170B60
    ctx->pc = 0x170B24u;
    SET_GPR_U32(ctx, 31, 0x170B2Cu);
    ctx->pc = 0x170B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B24u;
    // 0x170b28: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B60u, 0x170B24u, 0x170B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B2Cu;
label_170b2c:
    // 0x170b2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x170b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b34: 0xc05c44a  jal         func_171128
    ctx->pc = 0x170B34u;
    SET_GPR_U32(ctx, 31, 0x170B3Cu);
    ctx->pc = 0x170B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B34u;
    // 0x170b38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171128u, 0x170B34u, 0x170B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B3Cu;
}
