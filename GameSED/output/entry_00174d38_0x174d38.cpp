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

// Function: entry_00174d38
// Address: 0x174d38 - 0x174d48
void entry_00174d38_0x174d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174d38_0x174d38");
#endif

    ctx->pc = 0x174d38u;

    // 0x174d38: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x174d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x174d3c: 0x24a5d4b0  addiu       $a1, $a1, -0x2B50
    ctx->pc = 0x174d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956208));
    // 0x174d40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x174d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x174d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174d48u;
}
