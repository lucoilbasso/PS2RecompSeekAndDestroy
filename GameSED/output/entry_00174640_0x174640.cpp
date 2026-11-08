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

// Function: entry_00174640
// Address: 0x174640 - 0x174664
void entry_00174640_0x174640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174640_0x174640");
#endif

    ctx->pc = 0x174640u;

    // 0x174640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174644: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x174644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x174648: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x174648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17464c: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x17464cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x174650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174654: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x174654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174658: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x174658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x17465c: 0x805d118  j           func_174460
    ctx->pc = 0x17465Cu;
    ctx->pc = 0x174660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17465Cu;
    // 0x174660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x174664u;
}
