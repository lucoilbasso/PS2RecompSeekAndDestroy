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

// Function: entry_0012433c
// Address: 0x12433c - 0x124374
void entry_0012433c_0x12433c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012433c_0x12433c");
#endif

    ctx->pc = 0x12433cu;

    // 0x12433c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12433cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124348: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12434c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12434cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124350: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x124350u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124354: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x124354u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124358: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x124358u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12435c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x12435cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124360: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x124360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124364: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x124364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x124368: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x124368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12436c: 0x3e00008  jr          $ra
    ctx->pc = 0x12436Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12436Cu;
        // 0x124370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12436Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124374u;
}
