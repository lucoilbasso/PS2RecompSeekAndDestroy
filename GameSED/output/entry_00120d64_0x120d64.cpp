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

// Function: entry_00120d64
// Address: 0x120d64 - 0x120d94
void entry_00120d64_0x120d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120d64_0x120d64");
#endif

    ctx->pc = 0x120d64u;

    // 0x120d64: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x120d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x120d68: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x120d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x120d6c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x120d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x120d70: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x120d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x120d74: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x120d74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x120d78: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x120d78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x120d7c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x120d7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x120d80: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x120d80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x120d84: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x120d84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x120d88: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x120d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x120d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x120D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D8Cu;
        // 0x120d90: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120D94u;
}
