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

// Function: caseD_15
// Address: 0x154938 - 0x154978
void caseD_15_0x154938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x154938");
#endif

    switch (ctx->pc) {
        case 0x15496cu: goto label_15496c;
        default: break;
    }

    ctx->pc = 0x154938u;

    // 0x154938: 0x2605079c  addiu       $a1, $s0, 0x79C
    ctx->pc = 0x154938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
    // 0x15493c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x154940: 0x50400277  beql        $v0, $zero, . + 4 + (0x277 << 2)
    ctx->pc = 0x154940u;
    {
        const bool branch_taken_0x154940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154940) {
            ctx->pc = 0x154944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154940u;
            // 0x154944: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155320u;
            return;
        }
    }
    ctx->pc = 0x154948u;
    // 0x154948: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x154948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x15494c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x15494cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154950: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x154950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x154954: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154958: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x154958u;
    {
        const bool branch_taken_0x154958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154958u;
        // 0x15495c: 0x8cb20010  lw          $s2, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154958) {
            ctx->pc = 0x154978u;
            return;
        }
    }
    ctx->pc = 0x154960u;
    // 0x154960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154964: 0xc054016  jal         func_150058
    ctx->pc = 0x154964u;
    SET_GPR_U32(ctx, 31, 0x15496Cu);
    ctx->pc = 0x154968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154964u;
    // 0x154968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150058u, 0x154964u, 0x15496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15496Cu;
label_15496c:
    // 0x15496c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15496Cu;
    {
        const bool branch_taken_0x15496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15496Cu;
        // 0x154970: 0x8e22037c  lw          $v0, 0x37C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15496c) {
            ctx->pc = 0x1549B4u;
            return;
        }
    }
    ctx->pc = 0x154974u;
    // 0x154974: 0x0  nop
    ctx->pc = 0x154974u;
    // NOP
    ctx->pc = 0x154978u;
}
