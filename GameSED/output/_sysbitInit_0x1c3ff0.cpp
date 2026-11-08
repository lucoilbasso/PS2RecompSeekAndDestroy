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

// Function: _sysbitInit
// Address: 0x1c3ff0 - 0x1c4024
void _sysbitInit_0x1c3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitInit_0x1c3ff0");
#endif

    ctx->pc = 0x1c3ff0u;

    // 0x1c3ff0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c3ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ff4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1c3ff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ff8: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1c3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c3ffc: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1c3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1c4000: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1c4000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1c4004: 0xac470028  sw          $a3, 0x28($v0)
    ctx->pc = 0x1c4004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 7));
    // 0x1c4008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c400c: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x1c400cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x1c4010: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1c4010u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1c4014: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1c4014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1c4018: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x1c4018u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
    // 0x1c401c: 0x8071012  j           func_1C4048
    ctx->pc = 0x1C401Cu;
    ctx->pc = 0x1C4020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C401Cu;
    // 0x1c4020: 0xac460020  sw          $a2, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4048u;
    _sysbitFlush_0x1c4048(rdram, ctx, runtime); return;
    ctx->pc = 0x1C4024u;
}
