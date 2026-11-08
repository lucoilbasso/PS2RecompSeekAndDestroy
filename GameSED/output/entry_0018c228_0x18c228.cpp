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

// Function: entry_0018c228
// Address: 0x18c228 - 0x18c268
void entry_0018c228_0x18c228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c228_0x18c228");
#endif

    ctx->pc = 0x18c228u;

    // 0x18c228: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x18c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c22c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x18c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18c230: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x18c230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x18c234: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x18c234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x18c238: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x18c238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18c23c: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x18c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x18c240: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x18c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18c244: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18c244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18c248: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x18c248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x18c24c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x18c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18c250: 0xc5202a  slt         $a0, $a2, $a1
    ctx->pc = 0x18c250u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18c254: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x18c254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x18c258: 0x77b80b  movn        $s7, $v1, $s7
    ctx->pc = 0x18c258u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    // 0x18c25c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x18c25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18c260: 0x1480fec5  bnez        $a0, . + 4 + (-0x13B << 2)
    ctx->pc = 0x18C260u;
    {
        const bool branch_taken_0x18c260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C260u;
        // 0x18c264: 0xc29821  addu        $s3, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c260) {
            ctx->pc = 0x18BD78u;
            return;
        }
    }
    ctx->pc = 0x18C268u;
}
