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

// Function: entry_001a2144
// Address: 0x1a2144 - 0x1a2178
void entry_001a2144_0x1a2144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2144_0x1a2144");
#endif

    switch (ctx->pc) {
        case 0x1a214cu: goto label_1a214c;
        case 0x1a216cu: goto label_1a216c;
        default: break;
    }

    ctx->pc = 0x1a2144u;

label_1a2144:
    // 0x1a2144: 0xc069612  jal         func_1A5848
label_1a2148:
    if (ctx->pc == 0x1A2148u) {
        ctx->pc = 0x1A2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2144u;
        // 0x1a2148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A214Cu;
        goto label_1a214c;
    }
    ctx->pc = 0x1A2144u;
    SET_GPR_U32(ctx, 31, 0x1A214Cu);
    ctx->pc = 0x1A2148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2144u;
    // 0x1a2148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A2144u, 0x1A214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A214Cu;
label_1a214c:
    // 0x1a214c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1a214cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a2150:
    // 0x1a2150: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1a2150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1a2154:
    // 0x1a2154: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a2158:
    if (ctx->pc == 0x1A2158u) {
        ctx->pc = 0x1A2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2154u;
        // 0x1a2158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A215Cu;
        goto label_1a215c;
    }
    ctx->pc = 0x1A2154u;
    {
        const bool branch_taken_0x1a2154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2154u;
        // 0x1a2158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2154) {
            ctx->pc = 0x1A2178u;
            return;
        }
    }
    ctx->pc = 0x1A215Cu;
label_1a215c:
    // 0x1a215c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a2160:
    // 0x1a2160: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x1a2160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1a2164:
    // 0x1a2164: 0x40f809  jalr        $v0
label_1a2168:
    if (ctx->pc == 0x1A2168u) {
        ctx->pc = 0x1A2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2164u;
        // 0x1a2168: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A216Cu;
        goto label_1a216c;
    }
    ctx->pc = 0x1A2164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A216Cu);
        ctx->pc = 0x1A2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2164u;
        // 0x1a2168: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2164u, 0x1A216Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A216Cu;
label_1a216c:
    // 0x1a216c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a2170:
    if (ctx->pc == 0x1A2170u) {
        ctx->pc = 0x1A2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A216Cu;
        // 0x1a2170: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2174u;
        goto label_1a2174;
    }
    ctx->pc = 0x1A216Cu;
    {
        const bool branch_taken_0x1a216c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A216Cu;
        // 0x1a2170: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a216c) {
            ctx->pc = 0x1A2184u;
            return;
        }
    }
    ctx->pc = 0x1A2174u;
label_1a2174:
    // 0x1a2174: 0x0  nop
    ctx->pc = 0x1a2174u;
    // NOP
    ctx->pc = 0x1a2178u;
}
