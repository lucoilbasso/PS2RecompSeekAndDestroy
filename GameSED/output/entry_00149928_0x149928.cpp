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

// Function: entry_00149928
// Address: 0x149928 - 0x149984
void entry_00149928_0x149928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149928_0x149928");
#endif

    switch (ctx->pc) {
        case 0x149960u: goto label_149960;
        default: break;
    }

    ctx->pc = 0x149928u;

    // 0x149928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14992c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x14992cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149930: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x149930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x149934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149938: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x149938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x14993c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14993cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149940: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x149940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x149944: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x149944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x149948: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x149948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14994c: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x14994cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x149950: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x149950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x149954: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x149954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149958: 0xc05250a  jal         func_149428
    ctx->pc = 0x149958u;
    SET_GPR_U32(ctx, 31, 0x149960u);
    ctx->pc = 0x14995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149958u;
    // 0x14995c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x149958u, 0x149960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149960u;
label_149960:
    // 0x149960: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x149960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x149964: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149964u;
    {
        const bool branch_taken_0x149964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149964u;
        // 0x149968: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149964) {
            ctx->pc = 0x149984u;
            return;
        }
    }
    ctx->pc = 0x14996Cu;
    // 0x14996c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x149970: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149970u;
    {
        const bool branch_taken_0x149970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149970) {
            ctx->pc = 0x149984u;
            return;
        }
    }
    ctx->pc = 0x149978u;
    // 0x149978: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14997c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x14997cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x149980: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x149984u;
}
