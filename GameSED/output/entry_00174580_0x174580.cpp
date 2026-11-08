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

// Function: entry_00174580
// Address: 0x174580 - 0x1745b4
void entry_00174580_0x174580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174580_0x174580");
#endif

    ctx->pc = 0x174580u;

    // 0x174580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174584: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x174584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x174588: 0x73dfc  dsll32      $a3, $a3, 23
    ctx->pc = 0x174588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 23));
    // 0x17458c: 0x9fa60030  lwu         $a2, 0x30($sp)
    ctx->pc = 0x17458cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174590: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x174590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x174594: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x174594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x174598: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x174598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x17459c: 0x6377c  dsll32      $a2, $a2, 29
    ctx->pc = 0x17459cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 29));
    // 0x1745a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1745a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1745a4: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x1745a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1745a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1745a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1745ac: 0x805d118  j           func_174460
    ctx->pc = 0x1745ACu;
    ctx->pc = 0x1745B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1745ACu;
    // 0x1745b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x1745B4u;
}
