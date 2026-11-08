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

// Function: FontCenterSearch__9WcFontManUiUs
// Address: 0x17c9f0 - 0x17ca48
void FontCenterSearch__9WcFontManUiUs_0x17c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontCenterSearch__9WcFontManUiUs_0x17c9f0");
#endif

    switch (ctx->pc) {
        case 0x17ca20u: goto label_17ca20;
        default: break;
    }

    ctx->pc = 0x17c9f0u;

    // 0x17c9f0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x17c9f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x17c9f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c9f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c9f8: 0x2cc200ff  sltiu       $v0, $a2, 0xFF
    ctx->pc = 0x17c9f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x17c9fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ca00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ca04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ca04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ca0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ca0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA10u;
    {
        const bool branch_taken_0x17ca10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA10u;
        // 0x17ca14: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca10) {
            ctx->pc = 0x17CA24u;
            goto label_17ca24;
        }
    }
    ctx->pc = 0x17CA18u;
    // 0x17ca18: 0xc05f2c8  jal         func_17CB20
    ctx->pc = 0x17CA18u;
    SET_GPR_U32(ctx, 31, 0x17CA20u);
    ctx->pc = 0x17CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB20u, 0x17CA18u, 0x17CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA20u;
label_17ca20:
    // 0x17ca20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17ca20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ca24:
    // 0x17ca24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17ca28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ca28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ca2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17ca30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ca30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ca34: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x17ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17ca38: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17ca38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ca3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ca40: 0x8061004  j           func_184010
    ctx->pc = 0x17CA40u;
    ctx->pc = 0x17CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA40u;
    // 0x17ca44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184010u;
    GetFontProAddress__6WcFontUs_0x184010(rdram, ctx, runtime); return;
    ctx->pc = 0x17CA48u;
}
