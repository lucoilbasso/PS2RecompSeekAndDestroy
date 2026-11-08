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

// Function: entry_001c3014
// Address: 0x1c3014 - 0x1c303c
void entry_001c3014_0x1c3014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3014_0x1c3014");
#endif

    ctx->pc = 0x1c3014u;

    // 0x1c3014: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1c3014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1c3018: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1c3018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1c301c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1c301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1c3020: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1c3020u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1c3024: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c3024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c3028: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x1c3028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x1c302c: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x1c302cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x1c3030: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c3030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3034: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1c3034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1c3038: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x1c3038u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
    ctx->pc = 0x1c303cu;
}
