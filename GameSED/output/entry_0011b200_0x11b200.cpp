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

// Function: entry_0011b200
// Address: 0x11b200 - 0x11b238
void entry_0011b200_0x11b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b200_0x11b200");
#endif

    ctx->pc = 0x11b200u;

    // 0x11b200: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x11b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11b204: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x11b204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b208: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x11b208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x11b20c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11b20cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11b210: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x11b210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x11b214: 0x24c6b510  addiu       $a2, $a2, -0x4AF0
    ctx->pc = 0x11b214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948112));
    // 0x11b218: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x11b218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x11b21c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x11b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x11b220: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x11b220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x11b224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b228: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x11b228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x11b22c: 0x260800c0  addiu       $t0, $s0, 0xC0
    ctx->pc = 0x11b22cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x11b230: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x11B230u;
    SET_GPR_U32(ctx, 31, 0x11B238u);
    ctx->pc = 0x11B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B230u;
    // 0x11b234: 0x240907f8  addiu       $t1, $zero, 0x7F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x11B230u, 0x11B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B238u;
}
