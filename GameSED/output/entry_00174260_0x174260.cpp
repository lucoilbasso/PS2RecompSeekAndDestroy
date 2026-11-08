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

// Function: entry_00174260
// Address: 0x174260 - 0x174278
void entry_00174260_0x174260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174260_0x174260");
#endif

    ctx->pc = 0x174260u;

    // 0x174260: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174264: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x174264u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174268: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x174268u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17426c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17426cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174270: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x174270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x174274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174278u;
}
