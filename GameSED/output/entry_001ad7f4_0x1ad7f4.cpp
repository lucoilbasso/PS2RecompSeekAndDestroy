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

// Function: entry_001ad7f4
// Address: 0x1ad7f4 - 0x1ad82c
void entry_001ad7f4_0x1ad7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad7f4_0x1ad7f4");
#endif

    ctx->pc = 0x1ad7f4u;

    // 0x1ad7f4: 0x14c20011  bne         $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AD7F4u;
    {
        const bool branch_taken_0x1ad7f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7F4u;
        // 0x1ad7f8: 0x2cc20080  sltiu       $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7f4) {
            ctx->pc = 0x1AD83Cu;
            return;
        }
    }
    ctx->pc = 0x1AD7FCu;
    // 0x1ad7fc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1ad7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ad800: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1AD800u;
    {
        const bool branch_taken_0x1ad800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD800u;
        // 0x1ad804: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad800) {
            ctx->pc = 0x1AD964u;
            return;
        }
    }
    ctx->pc = 0x1AD808u;
    // 0x1ad808: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1ad808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1ad80c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1ad80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ad810: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1ad810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ad814: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD814u;
    {
        const bool branch_taken_0x1ad814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad814) {
            ctx->pc = 0x1AD82Cu;
            return;
        }
    }
    ctx->pc = 0x1AD81Cu;
    // 0x1ad81c: 0x56200046  bnel        $s1, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1AD81Cu;
    {
        const bool branch_taken_0x1ad81c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad81c) {
            ctx->pc = 0x1AD820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD81Cu;
            // 0x1ad820: 0xa224000c  sb          $a0, 0xC($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD938u;
            return;
        }
    }
    ctx->pc = 0x1AD824u;
    // 0x1ad824: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1AD824u;
    {
        const bool branch_taken_0x1ad824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD824u;
        // 0x1ad828: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad824) {
            ctx->pc = 0x1AD93Cu;
            return;
        }
    }
    ctx->pc = 0x1AD82Cu;
}
