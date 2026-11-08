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

// Function: entry_0012c618
// Address: 0x12c618 - 0x12c644
void entry_0012c618_0x12c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c618_0x12c618");
#endif

    ctx->pc = 0x12c618u;

    // 0x12c618: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x12c618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x12c61c: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x12c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x12c620: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C620u;
    {
        const bool branch_taken_0x12c620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c620) {
            ctx->pc = 0x12C624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C620u;
            // 0x12c624: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C644u;
            return;
        }
    }
    ctx->pc = 0x12C628u;
    // 0x12c628: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x12c62c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x12c62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x12c630: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12c630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12c634: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x12c634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c638: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12c638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12c63c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x12c63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x12c640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x12c644u;
}
