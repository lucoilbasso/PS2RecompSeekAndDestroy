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

// Function: entry_0017caf8
// Address: 0x17caf8 - 0x17cb20
void entry_0017caf8_0x17caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017caf8_0x17caf8");
#endif

    ctx->pc = 0x17caf8u;

    // 0x17caf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17cafc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17cb00: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x17cb00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x17cb04: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x17cb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb08: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x17cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x17cb0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb10: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x17cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17cb14: 0x8c670028  lw          $a3, 0x28($v1)
    ctx->pc = 0x17cb14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x17cb18: 0x806101a  j           func_184068
    ctx->pc = 0x17CB18u;
    ctx->pc = 0x17CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB18u;
    // 0x17cb1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184068u;
    FontDraw__6WcFontUsPUI80T2_0x184068(rdram, ctx, runtime); return;
    ctx->pc = 0x17CB20u;
}
