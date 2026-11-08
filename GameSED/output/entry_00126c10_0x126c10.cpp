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

// Function: entry_00126c10
// Address: 0x126c10 - 0x126c58
void entry_00126c10_0x126c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126c10_0x126c10");
#endif

    ctx->pc = 0x126c10u;

    // 0x126c10: 0x2ac21324  slti        $v0, $s6, 0x1324
    ctx->pc = 0x126c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4900) ? 1 : 0);
    // 0x126c14: 0x5440fefc  bnel        $v0, $zero, . + 4 + (-0x104 << 2)
    ctx->pc = 0x126C14u;
    {
        const bool branch_taken_0x126c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126c14) {
            ctx->pc = 0x126C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C14u;
            // 0x126c18: 0x8ef001b0  lw          $s0, 0x1B0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126808u;
            return;
        }
    }
    ctx->pc = 0x126C1Cu;
    // 0x126c1c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x126c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x126c20: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x126c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x126c24: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x126c24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x126c28: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x126c28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x126c2c: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x126c2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x126c30: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x126c30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x126c34: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x126c34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x126c38: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x126c38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x126c3c: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x126c3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x126c40: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x126c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x126c44: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x126c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x126c48: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x126c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x126c4c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x126c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x126c50: 0x3e00008  jr          $ra
    ctx->pc = 0x126C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C50u;
        // 0x126c54: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126C58u;
}
