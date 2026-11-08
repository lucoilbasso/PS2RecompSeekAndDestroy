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

// Function: entry_00195fb8
// Address: 0x195fb8 - 0x195ffc
void entry_00195fb8_0x195fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195fb8_0x195fb8");
#endif

    ctx->pc = 0x195fb8u;

    // 0x195fb8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x195fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x195fbc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x195fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x195fc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x195fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x195fc4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x195fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x195fc8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x195fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x195fcc: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x195fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195fd0: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x195fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195fd4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x195fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195fd8: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x195fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x195fdc: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x195fdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x195fe0: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x195fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x195fe4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x195fe4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x195fe8: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x195fe8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x195fec: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x195fecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x195ff0: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x195ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x195ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x195FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FF4u;
        // 0x195ff8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195FFCu;
}
