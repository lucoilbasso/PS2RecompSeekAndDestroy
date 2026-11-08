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

// Function: Clear__7WcActor
// Address: 0x1e1358 - 0x1e13c0
void Clear__7WcActor_0x1e1358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__7WcActor_0x1e1358");
#endif

    ctx->pc = 0x1e1358u;

    // 0x1e1358: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x1e1358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x1e135c: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x1e135cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1e1360: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1e1360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x1e1364: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x1e1364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x1e1368: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x1e1368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x1e136c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1e136cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e1370: 0x248200b0  addiu       $v0, $a0, 0xB0
    ctx->pc = 0x1e1370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x1e1374: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1e1374u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e1378: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x1e1378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1e137c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1e137cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e1380: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x1e1380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x1e1384: 0x248300f0  addiu       $v1, $a0, 0xF0
    ctx->pc = 0x1e1384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x1e1388: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x1e1388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x1e138c: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x1e138cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x1e1390: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x1e1390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x1e1394: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x1e1394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x1e1398: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1e1398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x1e139c: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x1e139cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x1e13a0: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x1e13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x1e13a4: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x1e13a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
    // 0x1e13a8: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x1e13a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x1e13ac: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1e13acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e13b0: 0x24820150  addiu       $v0, $a0, 0x150
    ctx->pc = 0x1e13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1e13b4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1e13b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e13b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E13B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13B8u;
        // 0x1e13bc: 0xac800164  sw          $zero, 0x164($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E13B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E13C0u;
}
