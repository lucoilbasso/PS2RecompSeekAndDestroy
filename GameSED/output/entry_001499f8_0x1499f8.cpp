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

// Function: entry_001499f8
// Address: 0x1499f8 - 0x149a54
void entry_001499f8_0x1499f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001499f8_0x1499f8");
#endif

    switch (ctx->pc) {
        case 0x149a30u: goto label_149a30;
        default: break;
    }

    ctx->pc = 0x1499f8u;

    // 0x1499f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1499f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499fc: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1499fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149a00: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x149a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x149a04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149a08: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x149a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x149a0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149a10: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x149a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x149a14: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x149a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x149a18: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x149a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x149a1c: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x149a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x149a20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x149a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x149a24: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x149a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a28: 0xc05250a  jal         func_149428
    ctx->pc = 0x149A28u;
    SET_GPR_U32(ctx, 31, 0x149A30u);
    ctx->pc = 0x149A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A28u;
    // 0x149a2c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x149A28u, 0x149A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A30u;
label_149a30:
    // 0x149a30: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x149a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x149a34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149A34u;
    {
        const bool branch_taken_0x149a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A34u;
        // 0x149a38: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a34) {
            ctx->pc = 0x149A54u;
            return;
        }
    }
    ctx->pc = 0x149A3Cu;
    // 0x149a3c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x149a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x149a40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149A40u;
    {
        const bool branch_taken_0x149a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149a40) {
            ctx->pc = 0x149A54u;
            return;
        }
    }
    ctx->pc = 0x149A48u;
    // 0x149a48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149a4c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x149a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x149a50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x149a54u;
}
