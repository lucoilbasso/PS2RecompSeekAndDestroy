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

// Function: entry_001c1264
// Address: 0x1c1264 - 0x1c1278
void entry_001c1264_0x1c1264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1264_0x1c1264");
#endif

    ctx->pc = 0x1c1264u;

    // 0x1c1264: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x1c1264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1c1268: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1c1268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1c126c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c126cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c1270: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1c1270u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1c1274: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1c1274u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1c1278u;
}
