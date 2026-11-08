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

// Function: entry_0013d9d4
// Address: 0x13d9d4 - 0x13da24
void entry_0013d9d4_0x13d9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d9d4_0x13d9d4");
#endif

    ctx->pc = 0x13d9d4u;

    // 0x13d9d4: 0x2a620080  slti        $v0, $s3, 0x80
    ctx->pc = 0x13d9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x13d9d8: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x13D9D8u;
    {
        const bool branch_taken_0x13d9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9D8u;
        // 0x13d9dc: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d9d8) {
            ctx->pc = 0x13D870u;
            return;
        }
    }
    ctx->pc = 0x13D9E0u;
    // 0x13d9e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13d9e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13d9e4: 0x2a820080  slti        $v0, $s4, 0x80
    ctx->pc = 0x13d9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x13d9e8: 0x5440ff9f  bnel        $v0, $zero, . + 4 + (-0x61 << 2)
    ctx->pc = 0x13D9E8u;
    {
        const bool branch_taken_0x13d9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d9e8) {
            ctx->pc = 0x13D9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D9E8u;
            // 0x13d9ec: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D868u;
            return;
        }
    }
    ctx->pc = 0x13D9F0u;
    // 0x13d9f0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x13d9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d9f4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x13d9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13d9f8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x13d9f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d9fc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x13d9fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13da00: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x13da00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13da04: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x13da04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13da08: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x13da08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13da0c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x13da0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13da10: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x13da10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13da14: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x13da14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13da18: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x13da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13da1c: 0x3e00008  jr          $ra
    ctx->pc = 0x13DA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA1Cu;
        // 0x13da20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DA24u;
}
