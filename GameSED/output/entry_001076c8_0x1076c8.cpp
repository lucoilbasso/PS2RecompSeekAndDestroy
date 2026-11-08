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

// Function: entry_001076c8
// Address: 0x1076c8 - 0x1076f8
void entry_001076c8_0x1076c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001076c8_0x1076c8");
#endif

    switch (ctx->pc) {
        case 0x1076d4u: goto label_1076d4;
        default: break;
    }

    ctx->pc = 0x1076c8u;

    // 0x1076c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1076c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1076cc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1076CCu;
    SET_GPR_U32(ctx, 31, 0x1076D4u);
    ctx->pc = 0x1076D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076CCu;
    // 0x1076d0: 0x213880b  movn        $s1, $s0, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1076CCu, 0x1076D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076D4u;
label_1076d4:
    // 0x1076d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1076D4u;
    {
        const bool branch_taken_0x1076d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1076d4) {
            ctx->pc = 0x107718u;
            return;
        }
    }
    ctx->pc = 0x1076DCu;
    // 0x1076dc: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1076DCu;
    {
        const bool branch_taken_0x1076dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1076dc) {
            ctx->pc = 0x1076E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1076DCu;
            // 0x1076e0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1076F8u;
            return;
        }
    }
    ctx->pc = 0x1076E4u;
    // 0x1076e4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1076e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1076e8: 0x3042fdff  andi        $v0, $v0, 0xFDFF
    ctx->pc = 0x1076e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65023);
    // 0x1076ec: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1076ECu;
    {
        const bool branch_taken_0x1076ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1076F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076ECu;
        // 0x1076f0: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1076ec) {
            ctx->pc = 0x1077E8u;
            return;
        }
    }
    ctx->pc = 0x1076F4u;
    // 0x1076f4: 0x0  nop
    ctx->pc = 0x1076f4u;
    // NOP
    ctx->pc = 0x1076f8u;
}
