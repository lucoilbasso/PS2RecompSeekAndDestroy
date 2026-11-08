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

// Function: entry_00188d18
// Address: 0x188d18 - 0x188d28
void entry_00188d18_0x188d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d18_0x188d18");
#endif

    ctx->pc = 0x188d18u;

    // 0x188d18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x188d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188d1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x188d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d20: 0x27c30210  addiu       $v1, $fp, 0x210
    ctx->pc = 0x188d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 528));
    // 0x188d24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x188d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x188d28u;
}
