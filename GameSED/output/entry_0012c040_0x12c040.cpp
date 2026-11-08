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

// Function: entry_0012c040
// Address: 0x12c040 - 0x12c07c
void entry_0012c040_0x12c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c040_0x12c040");
#endif

    switch (ctx->pc) {
        case 0x12c078u: goto label_12c078;
        default: break;
    }

    ctx->pc = 0x12c040u;

label_12c040:
    // 0x12c040: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x12c040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_12c044:
    // 0x12c044: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_12c048:
    if (ctx->pc == 0x12C048u) {
        ctx->pc = 0x12C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C044u;
        // 0x12c048: 0xa600002e  sh          $zero, 0x2E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C04Cu;
        goto label_12c04c;
    }
    ctx->pc = 0x12C044u;
    {
        const bool branch_taken_0x12c044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c044) {
            ctx->pc = 0x12C048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C044u;
            // 0x12c048: 0xa600002e  sh          $zero, 0x2E($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C07Cu;
            return;
        }
    }
    ctx->pc = 0x12C04Cu;
label_12c04c:
    // 0x12c04c: 0x9602002e  lhu         $v0, 0x2E($s0)
    ctx->pc = 0x12c04cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_12c050:
    // 0x12c050: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_12c054:
    if (ctx->pc == 0x12C054u) {
        ctx->pc = 0x12C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C050u;
        // 0x12c054: 0xa600002e  sh          $zero, 0x2E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C058u;
        goto label_12c058;
    }
    ctx->pc = 0x12C050u;
    {
        const bool branch_taken_0x12c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c050) {
            ctx->pc = 0x12C054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C050u;
            // 0x12c054: 0xa600002e  sh          $zero, 0x2E($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C07Cu;
            return;
        }
    }
    ctx->pc = 0x12C058u;
label_12c058:
    // 0x12c058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12c058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12c05c:
    // 0x12c05c: 0xc62c0180  lwc1        $f12, 0x180($s1)
    ctx->pc = 0x12c05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c060:
    // 0x12c060: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x12c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_12c064:
    // 0x12c064: 0xc62d017c  lwc1        $f13, 0x17C($s1)
    ctx->pc = 0x12c064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12c068:
    // 0x12c068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12c06c:
    // 0x12c06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12c070:
    // 0x12c070: 0x40f809  jalr        $v0
label_12c074:
    if (ctx->pc == 0x12C074u) {
        ctx->pc = 0x12C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C070u;
        // 0x12c074: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C078u;
        goto label_12c078;
    }
    ctx->pc = 0x12C070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12C078u);
        ctx->pc = 0x12C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C070u;
        // 0x12c074: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C070u, 0x12C078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12C078u;
label_12c078:
    // 0x12c078: 0xa600002e  sh          $zero, 0x2E($s0)
    ctx->pc = 0x12c078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12c07cu;
}
