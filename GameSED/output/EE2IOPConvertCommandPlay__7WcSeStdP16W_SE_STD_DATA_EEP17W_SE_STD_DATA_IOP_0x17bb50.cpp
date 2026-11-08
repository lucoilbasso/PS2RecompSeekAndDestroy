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

// Function: EE2IOPConvertCommandPlay__7WcSeStdP16W_SE_STD_DATA_EEP17W_SE_STD_DATA_IOP
// Address: 0x17bb50 - 0x17bbd8
void EE2IOPConvertCommandPlay__7WcSeStdP16W_SE_STD_DATA_EEP17W_SE_STD_DATA_IOP_0x17bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EE2IOPConvertCommandPlay__7WcSeStdP16W_SE_STD_DATA_EEP17W_SE_STD_DATA_IOP_0x17bb50");
#endif

    switch (ctx->pc) {
        case 0x17bba4u: goto label_17bba4;
        case 0x17bbb8u: goto label_17bbb8;
        default: break;
    }

    ctx->pc = 0x17bb50u;

    // 0x17bb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bb54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bb58: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17bb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bb60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17bb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17bb68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17bb68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17bb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17bb70: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17bb74: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17bb78: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17bb7c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x17bb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x17bb80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17bb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17bb84: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x17bb84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x17bb88: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x17bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x17bb8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17bb90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17bb94: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17bb98: 0x8c430804  lw          $v1, 0x804($v0)
    ctx->pc = 0x17bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2052)));
    // 0x17bb9c: 0xc05eef6  jal         func_17BBD8
    ctx->pc = 0x17BB9Cu;
    SET_GPR_U32(ctx, 31, 0x17BBA4u);
    ctx->pc = 0x17BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB9Cu;
    // 0x17bba0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BBD8u, 0x17BB9Cu, 0x17BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BBA4u;
label_17bba4:
    // 0x17bba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17bba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bba8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17bba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17bbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbb0: 0xc05ef08  jal         func_17BC20
    ctx->pc = 0x17BBB0u;
    SET_GPR_U32(ctx, 31, 0x17BBB8u);
    ctx->pc = 0x17BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BBB0u;
    // 0x17bbb4: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC20u, 0x17BBB0u, 0x17BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BBB8u;
label_17bbb8:
    // 0x17bbb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17bbbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17bbc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bbc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bbc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17bbc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bbcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17bbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBD0u;
        // 0x17bbd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BBD8u;
}
