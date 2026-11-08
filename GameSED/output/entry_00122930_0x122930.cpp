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

// Function: entry_00122930
// Address: 0x122930 - 0x122950
void entry_00122930_0x122930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122930_0x122930");
#endif

    ctx->pc = 0x122930u;

    // 0x122930: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x122930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122934: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x122934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x122938: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x122938u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12293c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12293cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122940: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x122940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122944: 0xc456017c  lwc1        $f22, 0x17C($v0)
    ctx->pc = 0x122944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x122948: 0xc4550180  lwc1        $f21, 0x180($v0)
    ctx->pc = 0x122948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12294c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x12294cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    ctx->pc = 0x122950u;
}
