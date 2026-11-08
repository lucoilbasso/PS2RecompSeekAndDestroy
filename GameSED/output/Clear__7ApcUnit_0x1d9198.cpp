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

// Function: Clear__7ApcUnit
// Address: 0x1d9198 - 0x1d9214
void Clear__7ApcUnit_0x1d9198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__7ApcUnit_0x1d9198");
#endif

    ctx->pc = 0x1d9198u;

    // 0x1d9198: 0x24820188  addiu       $v0, $a0, 0x188
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    // 0x1d919c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d919cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d91a0: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1d91a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1d91a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d91a8: 0xac850178  sw          $a1, 0x178($a0)
    ctx->pc = 0x1d91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 5));
    // 0x1d91ac: 0xac86017c  sw          $a2, 0x17C($a0)
    ctx->pc = 0x1d91acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 6));
    // 0x1d91b0: 0xac800180  sw          $zero, 0x180($a0)
    ctx->pc = 0x1d91b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 0));
    // 0x1d91b4: 0xac800184  sw          $zero, 0x184($a0)
    ctx->pc = 0x1d91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 0));
    // 0x1d91b8: 0xac83024c  sw          $v1, 0x24C($a0)
    ctx->pc = 0x1d91b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 3));
    // 0x1d91bc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1d91bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1d91c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d91c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d91c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d91c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d91c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1d91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1d91cc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d91ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d91d0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d91d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d91d4: 0xac800174  sw          $zero, 0x174($a0)
    ctx->pc = 0x1d91d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 0));
    // 0x1d91d8: 0xa4800238  sh          $zero, 0x238($a0)
    ctx->pc = 0x1d91d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 568), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d91dc: 0xac8001ac  sw          $zero, 0x1AC($a0)
    ctx->pc = 0x1d91dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 0));
    // 0x1d91e0: 0xac8001b0  sw          $zero, 0x1B0($a0)
    ctx->pc = 0x1d91e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
    // 0x1d91e4: 0xa08001a9  sb          $zero, 0x1A9($a0)
    ctx->pc = 0x1d91e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 425), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d91e8: 0xa08001aa  sb          $zero, 0x1AA($a0)
    ctx->pc = 0x1d91e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 426), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d91ec: 0xa08001ab  sb          $zero, 0x1AB($a0)
    ctx->pc = 0x1d91ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 427), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d91f0: 0xac8001b4  sw          $zero, 0x1B4($a0)
    ctx->pc = 0x1d91f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 0));
    // 0x1d91f4: 0xac8001b8  sw          $zero, 0x1B8($a0)
    ctx->pc = 0x1d91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 0));
    // 0x1d91f8: 0xac8001bc  sw          $zero, 0x1BC($a0)
    ctx->pc = 0x1d91f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 444), GPR_U32(ctx, 0));
    // 0x1d91fc: 0xac8001c0  sw          $zero, 0x1C0($a0)
    ctx->pc = 0x1d91fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    // 0x1d9200: 0xac8001c4  sw          $zero, 0x1C4($a0)
    ctx->pc = 0x1d9200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 0));
    // 0x1d9204: 0xac8001c8  sw          $zero, 0x1C8($a0)
    ctx->pc = 0x1d9204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 0));
    // 0x1d9208: 0xac800244  sw          $zero, 0x244($a0)
    ctx->pc = 0x1d9208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 0));
    // 0x1d920c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D920Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D920Cu;
        // 0x1d9210: 0xac800248  sw          $zero, 0x248($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D920Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9214u;
}
