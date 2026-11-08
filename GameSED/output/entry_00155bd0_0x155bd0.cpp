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

// Function: entry_00155bd0
// Address: 0x155bd0 - 0x155c10
void entry_00155bd0_0x155bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155bd0_0x155bd0");
#endif

    switch (ctx->pc) {
        case 0x155c04u: goto label_155c04;
        default: break;
    }

    ctx->pc = 0x155bd0u;

    // 0x155bd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155bd4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x155bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bd8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x155bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bdc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x155bdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155be0: 0x8e080264  lw          $t0, 0x264($s0)
    ctx->pc = 0x155be0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x155be4: 0x8cf10010  lw          $s1, 0x10($a3)
    ctx->pc = 0x155be4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x155be8: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x155be8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
    // 0x155bec: 0x81883  sra         $v1, $t0, 2
    ctx->pc = 0x155becu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 2));
    // 0x155bf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x155bf4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155BF4u;
    {
        const bool branch_taken_0x155bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BF4u;
        // 0x155bf8: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bf4) {
            ctx->pc = 0x155C10u;
            return;
        }
    }
    ctx->pc = 0x155BFCu;
    // 0x155bfc: 0xc054016  jal         func_150058
    ctx->pc = 0x155BFCu;
    SET_GPR_U32(ctx, 31, 0x155C04u);
    ctx->pc = 0x150058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150058u, 0x155BFCu, 0x155C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C04u;
label_155c04:
    // 0x155c04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x155C04u;
    {
        const bool branch_taken_0x155c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C04u;
        // 0x155c08: 0x8e02037c  lw          $v0, 0x37C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c04) {
            ctx->pc = 0x155C44u;
            return;
        }
    }
    ctx->pc = 0x155C0Cu;
    // 0x155c0c: 0x0  nop
    ctx->pc = 0x155c0cu;
    // NOP
    ctx->pc = 0x155c10u;
}
