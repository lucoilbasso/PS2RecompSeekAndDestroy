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

// Function: entry_00175248
// Address: 0x175248 - 0x175280
void entry_00175248_0x175248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175248_0x175248");
#endif

    switch (ctx->pc) {
        case 0x175270u: goto label_175270;
        default: break;
    }

    ctx->pc = 0x175248u;

label_175248:
    // 0x175248: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x175248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x17524c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x175250: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x175250u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175254: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x175254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x175258: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17525c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175260: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x175260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x175264: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x175264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x175268: 0xc05d440  jal         func_175100
    ctx->pc = 0x175268u;
    SET_GPR_U32(ctx, 31, 0x175270u);
    ctx->pc = 0x17526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175268u;
    // 0x17526c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175100u, 0x175268u, 0x175270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175270u;
label_175270:
    // 0x175270: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x175270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x175274: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175278: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x175278u;
    {
        const bool branch_taken_0x175278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175278) {
            ctx->pc = 0x17527Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175278u;
            // 0x17527c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175248;
        }
    }
    ctx->pc = 0x175280u;
}
