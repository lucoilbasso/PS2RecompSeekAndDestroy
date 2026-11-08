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

// Function: _clearEach
// Address: 0x1be170 - 0x1be238
void _clearEach_0x1be170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_clearEach_0x1be170");
#endif

    switch (ctx->pc) {
        case 0x1be188u: goto label_1be188;
        case 0x1be1f0u: goto label_1be1f0;
        default: break;
    }

    ctx->pc = 0x1be170u;

    // 0x1be170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be17c: 0xac820818  sw          $v0, 0x818($a0)
    ctx->pc = 0x1be17cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
    // 0x1be180: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1BE180u;
    SET_GPR_U32(ctx, 31, 0x1BE188u);
    ctx->pc = 0x1BE184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE180u;
    // 0x1be184: 0xac8001b0  sw          $zero, 0x1B0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1BE180u, 0x1BE188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE188u;
label_1be188:
    // 0x1be188: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1be188u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1be18c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1be18cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1be190: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x1be190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x1be194: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x1be194u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x1be198: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1be198u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1be19c: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x1be19cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x1be1a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1be1a4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1be1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1be1a8: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1be1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1be1ac: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x1be1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x1be1b0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1be1b0u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x1be1b4: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x1be1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x1be1b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1be1b8u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x1be1bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1be1c0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1be1c0u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0));
    // 0x1be1c4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1be1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x1be1c8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1be1c8u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 0));
    // 0x1be1cc: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1be1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x1be1d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1be1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1be1d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1be1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1be1d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1be1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1be1dc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1be1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1be1e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE1E0u;
    {
        const bool branch_taken_0x1be1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1E0u;
        // 0x1be1e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1e0) {
            ctx->pc = 0x1BE1F4u;
            goto label_1be1f4;
        }
    }
    ctx->pc = 0x1BE1E8u;
    // 0x1be1e8: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1BE1E8u;
    SET_GPR_U32(ctx, 31, 0x1BE1F0u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1BE1E8u, 0x1BE1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1F0u;
label_1be1f0:
    // 0x1be1f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1be1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1be1f4:
    // 0x1be1f4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1be1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1be1f8: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x1be1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x1be1fc: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1be1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1be200: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1be200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1be204: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1be204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1be208: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1be208u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x1be20c: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x1be20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x1be210: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1be210u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0));
    // 0x1be214: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1be214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1be218: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1be218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1be21c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1be21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1be220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be224: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1be224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1be228u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x1be22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be230: 0x8071142  j           func_1C4508
    ctx->pc = 0x1BE230u;
    ctx->pc = 0x1BE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE230u;
    // 0x1be234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4508u;
    sceIpuSync_0x1c4508(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE238u;
}
