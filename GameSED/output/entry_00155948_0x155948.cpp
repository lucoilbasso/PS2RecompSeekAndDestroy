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

// Function: entry_00155948
// Address: 0x155948 - 0x155970
void entry_00155948_0x155948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155948_0x155948");
#endif

    switch (ctx->pc) {
        case 0x155950u: goto label_155950;
        default: break;
    }

    ctx->pc = 0x155948u;

    // 0x155948: 0xc05929a  jal         func_164A68
    ctx->pc = 0x155948u;
    SET_GPR_U32(ctx, 31, 0x155950u);
    ctx->pc = 0x15594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155948u;
    // 0x15594c: 0x8e440690  lw          $a0, 0x690($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x155948u, 0x155950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155950u;
label_155950:
    // 0x155950: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x155950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x155954: 0x2442dfff  addiu       $v0, $v0, -0x2001
    ctx->pc = 0x155954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959103));
    // 0x155958: 0x2c423fff  sltiu       $v0, $v0, 0x3FFF
    ctx->pc = 0x155958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16383) ? 1 : 0);
    // 0x15595c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15595Cu;
    {
        const bool branch_taken_0x15595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15595c) {
            ctx->pc = 0x155960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15595Cu;
            // 0x155960: 0x8e460310  lw          $a2, 0x310($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155970u;
            return;
        }
    }
    ctx->pc = 0x155964u;
    // 0x155964: 0x721110c8  pmaxw       $v0, $s0, $s1
    ctx->pc = 0x155964u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 17)));
    // 0x155968: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x155968u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15596c: 0x8e460310  lw          $a2, 0x310($s2)
    ctx->pc = 0x15596cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
    ctx->pc = 0x155970u;
}
