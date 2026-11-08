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

// Function: entry_00148908
// Address: 0x148908 - 0x148948
void entry_00148908_0x148908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148908_0x148908");
#endif

    switch (ctx->pc) {
        case 0x148940u: goto label_148940;
        default: break;
    }

    ctx->pc = 0x148908u;

    // 0x148908: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x148908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14890c: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x14890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x148910: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x148910u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x148914: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x148914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x148918: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x148918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14891c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x14891cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x148920: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x148920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x148924: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x148924u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x148928: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x148928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14892c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x14892cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x148930: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x148930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x148934: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x148934u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x148938: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x148938u;
    SET_GPR_U32(ctx, 31, 0x148940u);
    ctx->pc = 0x14893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148938u;
    // 0x14893c: 0x479824  and         $s3, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x148938u, 0x148940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148940u;
label_148940:
    // 0x148940: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148944: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x148948u;
}
