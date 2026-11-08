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

// Function: entry_001537d8
// Address: 0x1537d8 - 0x153818
void entry_001537d8_0x1537d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001537d8_0x1537d8");
#endif

    switch (ctx->pc) {
        case 0x15380cu: goto label_15380c;
        default: break;
    }

    ctx->pc = 0x1537d8u;

    // 0x1537d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1537d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1537dc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1537DCu;
    {
        const bool branch_taken_0x1537dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537DCu;
        // 0x1537e0: 0x32e20020  andi        $v0, $s7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537dc) {
            ctx->pc = 0x153858u;
            return;
        }
    }
    ctx->pc = 0x1537E4u;
    // 0x1537e4: 0x8e230264  lw          $v1, 0x264($s1)
    ctx->pc = 0x1537e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x1537e8: 0x151240  sll         $v0, $s5, 9
    ctx->pc = 0x1537e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 9));
    // 0x1537ec: 0x30468000  andi        $a2, $v0, 0x8000
    ctx->pc = 0x1537ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1537f0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1537f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1537f4: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1537f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1537f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1537f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1537fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1537FCu;
    {
        const bool branch_taken_0x1537fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537FCu;
        // 0x153800: 0x8cb00010  lw          $s0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537fc) {
            ctx->pc = 0x153818u;
            return;
        }
    }
    ctx->pc = 0x153804u;
    // 0x153804: 0xc054016  jal         func_150058
    ctx->pc = 0x153804u;
    SET_GPR_U32(ctx, 31, 0x15380Cu);
    ctx->pc = 0x153808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153804u;
    // 0x153808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150058u, 0x153804u, 0x15380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15380Cu;
label_15380c:
    // 0x15380c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15380Cu;
    {
        const bool branch_taken_0x15380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15380Cu;
        // 0x153810: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15380c) {
            ctx->pc = 0x153850u;
            return;
        }
    }
    ctx->pc = 0x153814u;
    // 0x153814: 0x0  nop
    ctx->pc = 0x153814u;
    // NOP
    ctx->pc = 0x153818u;
}
