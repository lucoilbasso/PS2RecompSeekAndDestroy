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

// Function: entry_00149b68
// Address: 0x149b68 - 0x149bc8
void entry_00149b68_0x149b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149b68_0x149b68");
#endif

    switch (ctx->pc) {
        case 0x149ba0u: goto label_149ba0;
        default: break;
    }

    ctx->pc = 0x149b68u;

    // 0x149b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b6c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x149b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149b70: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x149b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x149b74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149b78: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x149b78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x149b7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149b80: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x149b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x149b84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x149b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x149b88: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x149b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x149b8c: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x149b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x149b90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x149b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x149b94: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x149b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b98: 0xc05250a  jal         func_149428
    ctx->pc = 0x149B98u;
    SET_GPR_U32(ctx, 31, 0x149BA0u);
    ctx->pc = 0x149B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B98u;
    // 0x149b9c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x149B98u, 0x149BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BA0u;
label_149ba0:
    // 0x149ba0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x149ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x149ba4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149BA4u;
    {
        const bool branch_taken_0x149ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BA4u;
        // 0x149ba8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ba4) {
            ctx->pc = 0x149BC8u;
            return;
        }
    }
    ctx->pc = 0x149BACu;
    // 0x149bac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x149bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x149bb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149BB0u;
    {
        const bool branch_taken_0x149bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BB0u;
        // 0x149bb4: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bb0) {
            ctx->pc = 0x149BCCu;
            return;
        }
    }
    ctx->pc = 0x149BB8u;
    // 0x149bb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149bbc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x149bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x149bc0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149bc4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x149bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x149bc8u;
}
