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

// Function: entry_0018d004
// Address: 0x18d004 - 0x18d030
void entry_0018d004_0x18d004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d004_0x18d004");
#endif

    ctx->pc = 0x18d004u;

    // 0x18d004: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d008: 0x1222001a  beq         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18D008u;
    {
        const bool branch_taken_0x18d008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D008u;
        // 0x18d00c: 0x86020246  lh          $v0, 0x246($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d008) {
            ctx->pc = 0x18D074u;
            return;
        }
    }
    ctx->pc = 0x18D010u;
    // 0x18d010: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x18d010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d014: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18d014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18d018: 0xc60001b8  lwc1        $f0, 0x1B8($s0)
    ctx->pc = 0x18d018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d01c: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x18d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x18d020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18d020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18d024: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18D024u;
    {
        const bool branch_taken_0x18d024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D024u;
        // 0x18d028: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d024) {
            ctx->pc = 0x18D080u;
            return;
        }
    }
    ctx->pc = 0x18D02Cu;
    // 0x18d02c: 0x0  nop
    ctx->pc = 0x18d02cu;
    // NOP
    ctx->pc = 0x18d030u;
}
