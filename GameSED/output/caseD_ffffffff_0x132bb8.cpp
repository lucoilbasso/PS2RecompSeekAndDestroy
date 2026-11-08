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

// Function: caseD_ffffffff
// Address: 0x132bb8 - 0x132bd8
void caseD_ffffffff_0x132bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_ffffffff_0x132bb8");
#endif

    ctx->pc = 0x132bb8u;

    // 0x132bb8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x132bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132bc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132bc4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x132bc4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x132bc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x132bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132bcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x132bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132bd0: 0x804171a  j           func_105C68
    ctx->pc = 0x132BD0u;
    ctx->pc = 0x132BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BD0u;
    // 0x132bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    ApSCDEntSetSystemStatus__Fi_0x105c68(rdram, ctx, runtime); return;
    ctx->pc = 0x132BD8u;
}
