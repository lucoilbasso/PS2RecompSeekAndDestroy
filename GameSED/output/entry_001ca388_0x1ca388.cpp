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

// Function: entry_001ca388
// Address: 0x1ca388 - 0x1ca3b4
void entry_001ca388_0x1ca388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca388_0x1ca388");
#endif

    ctx->pc = 0x1ca388u;

    // 0x1ca388: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ca388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ca38c: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x1ca38cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca390: 0xdfa60030  ld          $a2, 0x30($sp)
    ctx->pc = 0x1ca390u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca394: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1ca394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ca398: 0x86282b  sltu        $a1, $a0, $a2
    ctx->pc = 0x1ca398u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1ca39c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA39Cu;
    {
        const bool branch_taken_0x1ca39c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA39Cu;
        // 0x1ca3a0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca39c) {
            ctx->pc = 0x1CA3B4u;
            return;
        }
    }
    ctx->pc = 0x1CA3A4u;
    // 0x1ca3a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ca3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ca3a8: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1ca3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1ca3ac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ca3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1ca3b0: 0x86282b  sltu        $a1, $a0, $a2
    ctx->pc = 0x1ca3b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->pc = 0x1ca3b4u;
}
