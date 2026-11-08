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

// Function: entry_00143d04
// Address: 0x143d04 - 0x143d50
void entry_00143d04_0x143d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143d04_0x143d04");
#endif

    switch (ctx->pc) {
        case 0x143d1cu: goto label_143d1c;
        default: break;
    }

    ctx->pc = 0x143d04u;

    // 0x143d04: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x143d04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x143d08: 0x2ac20005  slti        $v0, $s6, 0x5
    ctx->pc = 0x143d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x143d0c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x143D0Cu;
    {
        const bool branch_taken_0x143d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D0Cu;
        // 0x143d10: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d0c) {
            ctx->pc = 0x143C38u;
            return;
        }
    }
    ctx->pc = 0x143D14u;
    // 0x143d14: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x143D14u;
    SET_GPR_U32(ctx, 31, 0x143D1Cu);
    ctx->pc = 0x143D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D14u;
    // 0x143d18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x143D14u, 0x143D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D1Cu;
label_143d1c:
    // 0x143d1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x143d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143d20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x143d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143d24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x143d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143d28: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x143d28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x143d2c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x143d2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143d30: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x143d30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x143d34: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x143d34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143d38: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x143d38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x143d3c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x143d3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143d40: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x143d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x143d44: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x143d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x143d48: 0x3e00008  jr          $ra
    ctx->pc = 0x143D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D48u;
        // 0x143d4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143D50u;
}
