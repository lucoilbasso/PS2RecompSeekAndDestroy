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

// Function: MemoryMalloc__18SIF_CALL_RPC_PARAMi
// Address: 0x17a7b8 - 0x17a834
void MemoryMalloc__18SIF_CALL_RPC_PARAMi_0x17a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MemoryMalloc__18SIF_CALL_RPC_PARAMi_0x17a7b8");
#endif

    switch (ctx->pc) {
        case 0x17a7f8u: goto label_17a7f8;
        case 0x17a818u: goto label_17a818;
        default: break;
    }

    ctx->pc = 0x17a7b8u;

    // 0x17a7b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a7bc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x17a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17a7c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a7c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a7cc: 0x24a5003f  addiu       $a1, $a1, 0x3F
    ctx->pc = 0x17a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x17a7d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a7d4: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x17a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x17a7d8: 0xa28824  and         $s1, $a1, $v0
    ctx->pc = 0x17a7d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x17a7dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7e0: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x17a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x17a7e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17A7E4u;
    {
        const bool branch_taken_0x17a7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7E4u;
        // 0x17a7e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7e4) {
            ctx->pc = 0x17A7F0u;
            goto label_17a7f0;
        }
    }
    ctx->pc = 0x17A7ECu;
    // 0x17a7ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17a7f0:
    // 0x17a7f0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17A7F0u;
    SET_GPR_U32(ctx, 31, 0x17A7F8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17A7F0u, 0x17A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7F8u;
label_17a7f8:
    // 0x17a7f8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17a7fc: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8
    ctx->pc = 0x17a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
    // 0x17a800: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17a800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a804: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A804u;
    {
        const bool branch_taken_0x17a804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A804u;
        // 0x17a808: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a804) {
            ctx->pc = 0x17A818u;
            goto label_17a818;
        }
    }
    ctx->pc = 0x17A80Cu;
    // 0x17a80c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17a810: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17A810u;
    SET_GPR_U32(ctx, 31, 0x17A818u);
    ctx->pc = 0x17A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A810u;
    // 0x17a814: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17A810u, 0x17A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A818u;
label_17a818:
    // 0x17a818: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x17a818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x17a81c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x17a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x17a820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a82c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A82Cu;
        // 0x17a830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A834u;
}
