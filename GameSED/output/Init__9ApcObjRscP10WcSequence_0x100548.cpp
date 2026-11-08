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

// Function: Init__9ApcObjRscP10WcSequence
// Address: 0x100548 - 0x1005d0
void Init__9ApcObjRscP10WcSequence_0x100548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcObjRscP10WcSequence_0x100548");
#endif

    ctx->pc = 0x100548u;

    // 0x100548: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x100548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x10054c: 0x24860058  addiu       $a2, $a0, 0x58
    ctx->pc = 0x10054cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x100550: 0x24870068  addiu       $a3, $a0, 0x68
    ctx->pc = 0x100550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x100554: 0x24880060  addiu       $t0, $a0, 0x60
    ctx->pc = 0x100554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x100558: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x100558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10055c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x10055cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x100560: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x100560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x100564: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x100564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x100568: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x100568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x10056c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x10056cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x100570: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x100570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x100574: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x100574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x100578: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x100578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x10057c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x10057cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x100580: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x100580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x100584: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x100584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x100588: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x100588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x10058c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10058cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x100590: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x100590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x100594: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x100594u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x100598: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x100598u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x10059c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x10059cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1005a0: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x1005a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x1005a4: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1005a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1005a8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1005a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1005ac: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1005acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1005b0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1005b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1005b4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1005b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1005b8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1005b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1005bc: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1005bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1005c0: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1005c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1005c4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1005c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1005c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1005C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1005CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005C8u;
        // 0x1005cc: 0xac800070  sw          $zero, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1005C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1005D0u;
}
