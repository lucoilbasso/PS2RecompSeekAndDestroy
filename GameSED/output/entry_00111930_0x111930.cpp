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

// Function: entry_00111930
// Address: 0x111930 - 0x111978
void entry_00111930_0x111930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111930_0x111930");
#endif

    switch (ctx->pc) {
        case 0x111944u: goto label_111944;
        default: break;
    }

    ctx->pc = 0x111930u;

    // 0x111930: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x111934: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x111934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x111938: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11193c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11193Cu;
    SET_GPR_U32(ctx, 31, 0x111944u);
    ctx->pc = 0x111940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11193Cu;
    // 0x111940: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11193Cu, 0x111944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111944u;
label_111944:
    // 0x111944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111948: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11194c: 0x51a03  sra         $v1, $a1, 8
    ctx->pc = 0x11194cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 8));
    // 0x111950: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x111950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x111954: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x111954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111958: 0x8c50b830  lw          $s0, -0x47D0($v0)
    ctx->pc = 0x111958u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x11195c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11195Cu;
    {
        const bool branch_taken_0x11195c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x111960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11195Cu;
        // 0x111960: 0x30730001  andi        $s3, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11195c) {
            ctx->pc = 0x111978u;
            return;
        }
    }
    ctx->pc = 0x111964u;
    // 0x111964: 0x50a4000a  beql        $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x111964u;
    {
        const bool branch_taken_0x111964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x111964) {
            ctx->pc = 0x111968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111964u;
            // 0x111968: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111990u;
            return;
        }
    }
    ctx->pc = 0x11196Cu;
    // 0x11196c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11196Cu;
    {
        const bool branch_taken_0x11196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11196c) {
            ctx->pc = 0x111990u;
            return;
        }
    }
    ctx->pc = 0x111974u;
    // 0x111974: 0x0  nop
    ctx->pc = 0x111974u;
    // NOP
    ctx->pc = 0x111978u;
}
