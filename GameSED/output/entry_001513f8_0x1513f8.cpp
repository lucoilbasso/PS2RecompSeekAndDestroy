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

// Function: entry_001513f8
// Address: 0x1513f8 - 0x151410
void entry_001513f8_0x1513f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001513f8_0x1513f8");
#endif

    ctx->pc = 0x1513f8u;

    // 0x1513f8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1513f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1513fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1513fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151400: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x151400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x151404: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x151404u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x151408: 0xc42097e4  lwc1        $f0, -0x681C($at)
    ctx->pc = 0x151408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15140c: 0xe60003b4  swc1        $f0, 0x3B4($s0)
    ctx->pc = 0x15140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
    ctx->pc = 0x151410u;
}
