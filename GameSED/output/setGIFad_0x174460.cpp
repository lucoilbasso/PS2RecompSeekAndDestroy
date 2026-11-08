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

// Function: setGIFad
// Address: 0x174460 - 0x174490
void setGIFad_0x174460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setGIFad_0x174460");
#endif

    ctx->pc = 0x174460u;

    // 0x174460: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x174460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x174464: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x174464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x174468: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x174468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x17446c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x17446cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x174470: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x174470u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x174474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x174474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x174478: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x174478u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17447c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x17447cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x174480: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x174480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x174484: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x174484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x174488: 0x3e00008  jr          $ra
    ctx->pc = 0x174488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174488u;
        // 0x17448c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174490u;
}
