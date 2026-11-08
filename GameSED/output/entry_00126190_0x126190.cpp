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

// Function: entry_00126190
// Address: 0x126190 - 0x1261d4
void entry_00126190_0x126190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126190_0x126190");
#endif

    ctx->pc = 0x126190u;

    // 0x126190: 0x2ac20040  slti        $v0, $s6, 0x40
    ctx->pc = 0x126190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x126194: 0x1440ff2e  bnez        $v0, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x126194u;
    {
        const bool branch_taken_0x126194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126194u;
        // 0x126198: 0x8fa400f4  lw          $a0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126194) {
            ctx->pc = 0x125E50u;
            return;
        }
    }
    ctx->pc = 0x12619Cu;
    // 0x12619c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x12619cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1261a0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x1261a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1261a4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x1261a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1261a8: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x1261a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1261ac: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x1261acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1261b0: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x1261b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1261b4: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x1261b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1261b8: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x1261b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1261bc: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x1261bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1261c0: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x1261c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1261c4: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1261c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1261c8: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1261c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1261cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1261CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1261D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261CCu;
        // 0x1261d0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1261CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1261D4u;
}
