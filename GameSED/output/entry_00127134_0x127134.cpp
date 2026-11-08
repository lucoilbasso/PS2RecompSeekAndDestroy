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

// Function: entry_00127134
// Address: 0x127134 - 0x127158
void entry_00127134_0x127134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127134_0x127134");
#endif

    ctx->pc = 0x127134u;

    // 0x127134: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x127134u;
    {
        const bool branch_taken_0x127134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127134) {
            ctx->pc = 0x127138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127134u;
            // 0x127138: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127160u;
            return;
        }
    }
    ctx->pc = 0x12713Cu;
    // 0x12713c: 0x93a300c3  lbu         $v1, 0xC3($sp)
    ctx->pc = 0x12713cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x127140: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x127140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x127144: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127144u;
    {
        const bool branch_taken_0x127144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127144u;
        // 0x127148: 0x246200f6  addiu       $v0, $v1, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127144) {
            ctx->pc = 0x127158u;
            return;
        }
    }
    ctx->pc = 0x12714Cu;
    // 0x12714c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12714Cu;
    {
        const bool branch_taken_0x12714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12714Cu;
        // 0x127150: 0xa3a000c3  sb          $zero, 0xC3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12714c) {
            ctx->pc = 0x12715Cu;
            return;
        }
    }
    ctx->pc = 0x127154u;
    // 0x127154: 0x0  nop
    ctx->pc = 0x127154u;
    // NOP
    ctx->pc = 0x127158u;
}
