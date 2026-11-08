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

// Function: entry_00117bc8
// Address: 0x117bc8 - 0x117bf8
void entry_00117bc8_0x117bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117bc8_0x117bc8");
#endif

    ctx->pc = 0x117bc8u;

    // 0x117bc8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x117bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x117bcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x117bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bd0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x117bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x117bd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x117bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bd8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x117bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x117bdc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x117bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117be0: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x117be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x117be4: 0x2603000b  addiu       $v1, $s0, 0xB
    ctx->pc = 0x117be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x117be8: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x117be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x117bec: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x117becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x117bf0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x117bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x117bf4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x117bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x117bf8u;
}
