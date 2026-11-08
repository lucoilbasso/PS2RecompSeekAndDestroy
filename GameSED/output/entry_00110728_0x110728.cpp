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

// Function: entry_00110728
// Address: 0x110728 - 0x110744
void entry_00110728_0x110728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110728_0x110728");
#endif

    ctx->pc = 0x110728u;

    // 0x110728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11072c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11072cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110730: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x110730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x110734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110738: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x110738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x11073c: 0x804110c  j           func_104430
    ctx->pc = 0x11073Cu;
    ctx->pc = 0x110740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11073Cu;
    // 0x110740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    ExtPanelGet1ObjPtr__9ApcObjRscP15BsSCDEntControlb_0x104430(rdram, ctx, runtime); return;
    ctx->pc = 0x110744u;
}
