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

// Function: entry_00198d40
// Address: 0x198d40 - 0x198d84
void entry_00198d40_0x198d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198d40_0x198d40");
#endif

    ctx->pc = 0x198d40u;

    // 0x198d40: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x198d44: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x198d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x198d48: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x198d48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x198d4c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x198d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x198d50: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x198d50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x198d54: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x198d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198d58: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x198d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x198d5c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x198d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x198d60: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x198d60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x198d64: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x198d64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x198d68: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x198d68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x198d6c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x198d6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198d70: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x198d70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x198d74: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x198d74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x198d78: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x198d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x198d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x198D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D7Cu;
        // 0x198d80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198D84u;
}
